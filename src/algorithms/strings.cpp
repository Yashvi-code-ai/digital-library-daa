#include "dlaa/algorithms.hpp"
#include <algorithm>
#include <functional>
namespace dlaa::algo {
void mergeSort(std::vector<int>& a) {
 if(a.size()<2)return; std::vector<int> t(a.size());
 std::function<void(int,int)> sort=[&](int l,int r){if(r-l<2)return;int m=l+(r-l)/2;sort(l,m);sort(m,r);int i=l,j=m,k=l;while(i<m&&j<r)t[k++]=a[i]<=a[j]?a[i++]:a[j++];while(i<m)t[k++]=a[i++];while(j<r)t[k++]=a[j++];for(k=l;k<r;++k)a[k]=t[k];};sort(0,(int)a.size());
}
void quickSort(std::vector<int>& a){std::function<void(int,int)> q=[&](int l,int r){if(l>=r)return;int i=l,j=r,p=a[l+(r-l)/2];while(i<=j){while(a[i]<p)++i;while(a[j]>p)--j;if(i<=j)std::swap(a[i++],a[j--]);}if(l<j)q(l,j);if(i<r)q(i,r);};if(!a.empty())q(0,(int)a.size()-1);}
int binarySearchIterative(const std::vector<int>&a,int x){int l=0,r=(int)a.size()-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==x)return m;if(a[m]<x)l=m+1;else r=m-1;}return -1;}
int binarySearchRecursive(const std::vector<int>&a,int x){std::function<int(int,int)>q=[&](int l,int r){if(l>r)return -1;int m=l+(r-l)/2;if(a[m]==x)return m;return a[m]<x?q(m+1,r):q(l,m-1);};return q(0,(int)a.size()-1);}
std::pair<int,int> maximumSubarray(const std::vector<int>&a){if(a.empty())return {0,-1};int best=a[0],cur=a[0],start=0,at=0;for(int i=1;i<(int)a.size();++i){if(cur<0){cur=a[i];start=i;}else cur+=a[i];if(cur>best){best=cur;at=start;}}return {best,at};}
long long fastPower(long long b,unsigned e){long long r=1;while(e){if(e&1U)r*=b;b*=b;e>>=1U;}return r;}
std::size_t naiveMatch(const std::string&t,const std::string&p){if(p.empty())return 0;if(p.size()>t.size())return std::string::npos;for(std::size_t i=0;i+p.size()<=t.size();++i){std::size_t j=0;while(j<p.size()&&t[i+j]==p[j])++j;if(j==p.size())return i;}return std::string::npos;}
std::size_t rabinKarp(const std::string&t,const std::string&p){if(p.empty())return 0;if(p.size()>t.size())return std::string::npos;const long long M=1000000007,B=257;long long h=1,ph=0,th=0;for(std::size_t i=1;i<p.size();++i)h=h*B%M;for(std::size_t i=0;i<p.size();++i){ph=(ph*B+(unsigned char)p[i])%M;th=(th*B+(unsigned char)t[i])%M;}for(std::size_t i=0;i+p.size()<=t.size();++i){if(ph==th&&t.compare(i,p.size(),p)==0)return i;if(i+p.size()<t.size())th=((th-(unsigned char)t[i]*h%M+M)*B+(unsigned char)t[i+p.size()])%M;}return std::string::npos;}
static std::vector<int> prefix(const std::string&p){std::vector<int>v(p.size());for(int i=1,j=0;i<(int)p.size();++i){while(j&&p[i]!=p[j])j=v[j-1];if(p[i]==p[j])++j;v[i]=j;}return v;}
std::size_t kmp(const std::string&t,const std::string&p){if(p.empty())return 0;auto pi=prefix(p);for(std::size_t i=0,j=0;i<t.size();++i){while(j&&t[i]!=p[j])j=pi[j-1];if(t[i]==p[j])++j;if(j==p.size())return i+1-j;}return std::string::npos;}
std::size_t finiteAutomatonMatch(const std::string&t,const std::string&p){if(p.empty())return 0;int m=(int)p.size();std::vector<std::vector<int>>d(256,std::vector<int>(m+1));d[(unsigned char)p[0]][0]=1;int x=0;for(int j=1;j<=m;++j){for(int c=0;c<256;++c)d[c][j]=d[c][x];if(j<m){d[(unsigned char)p[j]][j]=j+1;x=d[(unsigned char)p[j]][x];}}int s=0;for(int i=0;i<(int)t.size();++i){s=d[(unsigned char)t[i]][s];if(s==m)return i-m+1;}return std::string::npos;}
}