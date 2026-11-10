#include "dlaa/benchmark.hpp"
#include "dlaa/algorithms.hpp"
#include <algorithm>
#include <chrono>
#include <fstream>
#include <random>
namespace dlaa {
bool runSortingBenchmark(const std::string&p,std::string&e){std::ofstream f(p);if(!f){e="cannot open benchmark output";return false;}f<<"n,algorithm,microseconds\n";std::mt19937 gen(42);for(int n:{100,1000,5000,10000}){std::vector<int>a(n);for(auto&x:a)x=(int)gen();for(const char*name:{"merge","quick"}){auto b=a;auto t=std::chrono::steady_clock::now();if(std::string(name)=="merge")algo::mergeSort(b);else algo::quickSort(b);auto us=std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now()-t).count();if(!std::is_sorted(b.begin(),b.end())){e="sort validation failed";return false;}f<<n<<','<<name<<','<<us<<'\n';}}return true;}
}