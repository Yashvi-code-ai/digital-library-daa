#include "dlaa/recommendation.hpp"
#include <algorithm>
#include <cctype>
#include <unordered_set>
namespace dlaa {
static std::string norm(std::string s){for(char&c:s)c=(char)std::tolower((unsigned char)c);return s;}
std::vector<SearchResult>Recommender::recommend(int uid,std::size_t limit)const{const auto*u=lib_.findUser(uid);if(!u)return {};std::unordered_set<int>read(u->reading_history.begin(),u->reading_history.end());std::vector<SearchResult>out;for(const auto&b:lib_.books()){if(read.count(b.id))continue;double score=0;std::string why;for(const auto&i:u->interests)if(norm(i)==norm(b.category)){score+=3;why+="category match; ";}for(const auto&k:b.keywords)for(const auto&i:u->interests)if(norm(k)==norm(i)){score+=2;why+="keyword match; ";}int cited=0;for(int id:u->reading_history){auto old=lib_.findBook(id);if(old&&std::find(old->citations.begin(),old->citations.end(),b.id)!=old->citations.end())++cited;}if(cited){score+=1.5*cited;why+="citation link; ";}score+=0.2*b.rating;if(why.empty())why="catalogue rating";out.push_back({b.id,score,why});}std::sort(out.begin(),out.end(),[](const auto&a,const auto&b){return a.score!=b.score?a.score>b.score:a.book_id<b.book_id;});if(out.size()>limit)out.resize(limit);return out;}
}