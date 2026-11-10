#include "dlaa/algorithms.hpp"
#include "dlaa/library.hpp"
#include "dlaa/search.hpp"
#include "dlaa/recommendation.hpp"
#include <algorithm>
#include <cassert>
#include <iostream>
using namespace dlaa;
int main(){
 std::vector<int>a{5,1,4,2,3};algo::mergeSort(a);assert(std::is_sorted(a.begin(),a.end()));a={5,1,4,2,3};algo::quickSort(a);assert(std::is_sorted(a.begin(),a.end()));
 assert(algo::binarySearchIterative(a,4)==3);assert(algo::binarySearchRecursive(a,9)==-1);
 assert(algo::naiveMatch("abracadabra","cada")==4);assert(algo::rabinKarp("abracadabra","cada")==4);assert(algo::kmp("abracadabra","cada")==4);assert(algo::finiteAutomatonMatch("abracadabra","cada")==4);
 assert(algo::knapsack01({2,3,4},{3,4,5},5)==7);assert(algo::knapsackBacktracking({2,3,4},{3,4,5},5)==7);assert(algo::knapsackBranchBound({2,3,4},{3,4,5},5,0)==7);assert(algo::knapsackBranchBound({2,3,4},{3,4,5},5,1)==7);assert(algo::knapsackBranchBound({2,3,4},{3,4,5},5,2)==7);
 assert(algo::chineseRemainder({2,3,2},{3,5,7})==23);assert(algo::dijkstra(3,{{0,1,2},{1,2,3},{0,2,9}},0)[2]==5);assert(algo::bellmanFord(3,{{0,1,2},{1,2,-1}},0)[2]==1);
 assert(algo::fordFulkerson(4,{{0,3,0,3},{0,0,2,0},{0,0,0,2},{0,0,0,0}},0,3)==2);assert(algo::maximumBipartiteMatching({{0,1},{0}},2)==2);
 assert(algo::prim(3,{{0,1,1},{1,2,2},{0,2,5}}).cost==3);assert(algo::kruskal(3,{{0,1,1},{1,2,2},{0,2,5}}).cost==3);assert(!algo::nQueens(4).empty());
 Library l;Book b;b.id=1;b.title="Algorithms";b.author="Cormen";b.category="CS";b.keywords={"graph"};b.rating=4.5;l.addBook(b);User u;u.id=1;u.name="A";u.interests={"CS"};l.addUser(u);assert(SearchEngine(l).byTitle("algo").size()==1);assert(Recommender(l).recommend(1).size()==1);
 std::cout<<"All tests passed.\n";
}
