#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>
using namespace std;
void dfs(int str,vector<list<int> > vec,bool visited[])
{

visited[str]=true;
cout<<str<<" ";
list<int> ::iterator itr;
itr=vec[str].begin();
while(itr!=vec[str].end())
{
    if(visited[*itr]==false)
        dfs(*itr,vec,visited);
    itr++;
}
}
int main()
{
    int n,m,v1,v2,i;
    cin>>n>>m;
    vector<list<int> > vec(n+1);
    for(i=0;i<m;i++)
    {
        cin>>v1>>v2;
        vec[v1].push_back(v2);

    }
    bool visited[n+1];
    for(i=1;i<n+1;i++)
    {
        visited[i]=false;
    }
    int str=1;
    for(i=2;i<=n;i++)
    {
        if(visited[i]==false)
    dfs(i,vec,visited);
    }
    return 0;
}
