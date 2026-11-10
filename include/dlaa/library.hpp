#pragma once
#include "dlaa/domain.hpp"
#include <vector>
namespace dlaa {
class Library {
 public:
  void addBook(Book); void addUser(User);
  const std::vector<Book>& books() const { return books_; }
  const std::vector<User>& users() const { return users_; }
  const Book* findBook(int) const; const User* findUser(int) const;
 private: std::vector<Book> books_; std::vector<User> users_;
};
}
