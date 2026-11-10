#pragma once
#include "dlaa/library.hpp"
#include <string>
namespace dlaa {
bool loadBooksCsv(const std::string&,Library&,std::string&);
bool loadUsersCsv(const std::string&,Library&,std::string&);
bool exportSearchCsv(const std::string&,const std::vector<SearchResult>&,std::string&);
}