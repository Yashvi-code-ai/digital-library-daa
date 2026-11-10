#pragma once
#include <string>
#include <vector>
namespace dlaa {
struct Book {
  int id{}; std::string title, author, category, description;
  std::vector<std::string> keywords; int year{}; double rating{};
  std::vector<int> citations;
};
struct User {
  int id{}; std::string name; std::vector<std::string> interests;
  std::vector<int> reading_history, rated_book_ids;
};
struct SearchResult { int book_id{}; double score{}; std::string reason; };
struct CitationEdge { int from{}, to{}; double weight{1.0}; };
struct ReadingHistory { int user_id{}, book_id{}; std::string date; };
}
