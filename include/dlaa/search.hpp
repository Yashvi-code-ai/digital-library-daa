#pragma once
#include "dlaa/library.hpp"
#include <string>
#include <vector>
namespace dlaa {
class SearchEngine {
 public:
  explicit SearchEngine(const Library& l):lib_(l){}
  std::vector<const Book*> byId(int) const;
  std::vector<const Book*> byTitle(const std::string&) const;
  std::vector<const Book*> byAuthor(const std::string&) const;
  std::vector<const Book*> byCategory(const std::string&) const;
  std::vector<const Book*> byKeyword(const std::string&) const;
  std::vector<const Book*> byPattern(const std::string&,const std::string&) const;
 private: const Library& lib_;
};
}