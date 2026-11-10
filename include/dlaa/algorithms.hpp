#pragma once
#include <string>
#include <vector>
#include <utility>
namespace dlaa::algo {
void mergeSort(std::vector<int>&); void quickSort(std::vector<int>&);
int binarySearchIterative(const std::vector<int>&,int);
int binarySearchRecursive(const std::vector<int>&,int);
std::pair<int,int> maximumSubarray(const std::vector<int>&);
long long fastPower(long long,unsigned);
std::size_t naiveMatch(const std::string&,const std::string&);
std::size_t rabinKarp(const std::string&,const std::string&);
std::size_t kmp(const std::string&,const std::string&);
std::size_t finiteAutomatonMatch(const std::string&,const std::string&);
struct Edge { int u,v,w; };
struct MSTResult { int cost{}; std::vector<Edge> edges; };
std::vector<int> dijkstra(int,const std::vector<Edge>&,int);
std::vector<int> bellmanFord(int,const std::vector<Edge>&,int);
std::vector<std::vector<int>> floydWarshall(std::vector<std::vector<int>>);
MSTResult prim(int,const std::vector<Edge>&);
MSTResult kruskal(int,std::vector<Edge>);
int fordFulkerson(int,const std::vector<std::vector<int>>&,int,int);
int maximumBipartiteMatching(const std::vector<std::vector<int>>&,int);
int knapsack01(const std::vector<int>&,const std::vector<int>&,int);
int knapsackBacktracking(const std::vector<int>&,const std::vector<int>&,int);
int knapsackBranchBound(const std::vector<int>&,const std::vector<int>&,int,int);
std::vector<int> nQueens(int);
long long chineseRemainder(const std::vector<long long>&,const std::vector<long long>&);
}
