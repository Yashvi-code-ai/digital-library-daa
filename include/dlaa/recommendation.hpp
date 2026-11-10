#pragma once
#include "dlaa/library.hpp"
#include "dlaa/domain.hpp"
#include <vector>
namespace dlaa {
class Recommender {
 public:
  explicit Recommender(const Library& l):lib_(l){}
  std::vector<SearchResult> recommend(int,std::size_t limit=5) const;
 private: const Library& lib_;
};
}