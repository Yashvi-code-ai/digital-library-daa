#include "dlaa/library.hpp"
#include <stdexcept>
namespace dlaa {
void Library::addBook(Book b){if(b.id<=0||b.title.empty())throw std::invalid_argument("book requires positive ID and title");if(findBook(b.id))throw std::invalid_argument("duplicate book ID");if(b.rating<0||b.rating>5)throw std::invalid_argument("rating range is 0..5");books_.push_back(std::move(b));}
void Library::addUser(User u){if(u.id<=0||u.name.empty())throw std::invalid_argument("user requires positive ID and name");if(findUser(u.id))throw std::invalid_argument("duplicate user ID");users_.push_back(std::move(u));}
const Book*Library::findBook(int id)const{for(const auto&b:books_)if(b.id==id)return &b;return nullptr;}
const User*Library::findUser(int id)const{for(const auto&u:users_)if(u.id==id)return &u;return nullptr;}
}