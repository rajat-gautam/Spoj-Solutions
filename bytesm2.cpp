#include<bits/stdc++.h>
#include<iostream>
#define MAX 100
using namespace std;
int n,m;
int cache[MAX][MAX];
int dp(int ar[MAX][MAX],int i,int j)
{
if(i==n-1)return ar[i][j];
if(cache[i][j]!=-1)return cache[i][j];
if(j==0)return cache[i][j]=max(dp(ar,i+1,j),dp(ar,i+1,j+1))+ar[i][j];
if(j==m-1)return cache[i][j]=max(dp(ar,i+1,j-1),dp(ar,i+1,j))+ar[i][j];
return cache[i][j]=max(max(dp(ar,i+1,j-1),dp(ar,i+1,j)),dp(ar,i+1,j+1))+ar[i][j];
}
int main()
{
int t;
std::cin>>t;
while(t--)
{
int ar[MAX][MAX]={0};
std::cin>>n>>m;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cache[i][j]=-1;
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
std::cin>>ar[i][j];
}
}
int max=0;
for(int j=0;j<m;j++)
{
int k=dp(ar,0,j);
if(k>max)max=k;
}
std::cout<<max<<"\n";
}
return 0;
}
