#include "dlaa/search.hpp"
#include "dlaa/algorithms.hpp"
#include <algorithm>
#include <cctype>
namespace dlaa {
static std::string lower(std::string s){for(char&c:s)c=(char)std::tolower((unsigned char)c);return s;}
std::vector<const Book*>SearchEngine::byId(int id)const{std::vector<const Book*>r;if(auto b=lib_.findBook(id))r.push_back(b);return r;}
std::vector<const Book*>SearchEngine::byTitle(const std::string&q)const{std::vector<const Book*>r;auto x=lower(q);for(const auto&b:lib_.books())if(lower(b.title).find(x)!=std::string::npos)r.push_back(&b);return r;}
std::vector<const Book*>SearchEngine::byAuthor(const std::string&q)const{std::vector<const Book*>r;auto x=lower(q);for(const auto&b:lib_.books())if(lower(b.author).find(x)!=std::string::npos)r.push_back(&b);return r;}
std::vector<const Book*>SearchEngine::byCategory(const std::string&q)const{std::vector<const Book*>r;auto x=lower(q);for(const auto&b:lib_.books())if(lower(b.category).find(x)!=std::string::npos)r.push_back(&b);return r;}
std::vector<const Book*>SearchEngine::byKeyword(const std::string&q)const{std::vector<const Book*>r;auto x=lower(q);for(const auto&b:lib_.books())for(const auto&k:b.keywords)if(lower(k)==x){r.push_back(&b);break;}return r;}
std::vector<const Book*>SearchEngine::byPattern(const std::string&q,const std::string&a)const{std::vector<const Book*>r;for(const auto&b:lib_.books()){auto t=lower(b.title+" "+b.author+" "+b.description),p=lower(q);std::size_t i=a=="kmp"?algo::kmp(t,p):a=="rabin-karp"?algo::rabinKarp(t,p):a=="automaton"?algo::finiteAutomatonMatch(t,p):algo::naiveMatch(t,p);if(i!=std::string::npos)r.push_back(&b);}return r;}
}