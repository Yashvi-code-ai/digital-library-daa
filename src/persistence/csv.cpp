#include "dlaa/persistence.hpp"
#include <fstream>
#include <sstream>
#include <stdexcept>
namespace dlaa {
static std::vector<std::string>split(const std::string&s,char d){std::vector<std::string>v;std::string cur;bool q=false;for(std::size_t i=0;i<s.size();++i){char c=s[i];if(c=='"')q=!q;else if(c==d&&!q){v.push_back(cur);cur.clear();}else cur+=c;}v.push_back(cur);return v;}
static std::vector<int>ints(const std::string&s){std::vector<int>v;if(s.empty())return v;for(auto&x:split(s,'|'))if(!x.empty())v.push_back(std::stoi(x));return v;}
bool loadBooksCsv(const std::string&p,Library&l,std::string&e){std::ifstream f(p);if(!f){e="cannot open "+p;return false;}std::string line;std::getline(f,line);try{while(std::getline(f,line)){auto c=split(line,',');if(c.size()!=9)throw std::runtime_error("books.csv expects 9 columns");Book b;b.id=std::stoi(c[0]);b.title=c[1];b.author=c[2];b.category=c[3];b.description=c[4];b.keywords=split(c[5],'|');b.year=std::stoi(c[6]);b.rating=std::stod(c[7]);b.citations=ints(c[8]);l.addBook(std::move(b));}}catch(const std::exception&x){e=x.what();return false;}return true;}
bool loadUsersCsv(const std::string&p,Library&l,std::string&e){std::ifstream f(p);if(!f){e="cannot open "+p;return false;}std::string line;std::getline(f,line);try{while(std::getline(f,line)){auto c=split(line,',');if(c.size()!=4)throw std::runtime_error("users.csv expects 4 columns");User u;u.id=std::stoi(c[0]);u.name=c[1];u.interests=split(c[2],'|');u.reading_history=ints(c[3]);l.addUser(std::move(u));}}catch(const std::exception&x){e=x.what();return false;}return true;}
bool exportSearchCsv(const std::string&p,const std::vector<SearchResult>&r,std::string&e){std::ofstream f(p);if(!f){e="cannot write "+p;return false;}f<<"book_id,score,reason\n";for(auto&x:r)f<<x.book_id<<','<<x.score<<",\""<<x.reason<<"\"\n";return true;}
}