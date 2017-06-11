#include<iostream>
#include<stdio.h>
#include<vector>
#include<list>
using namespace std;
void bfs(vector<list<int> > adjlist,int parent[],int level[])
{
    list<int>::iterator itr;
    int i,par,lev;
    bool flag=true;
    lev=0;
    level[1]=lev;
    while(flag)
    {
        flag=false;
        for(i=1;i<adjlist.size();++i)
        {
            if(level[i]==lev)
            {
                flag=true;
                itr=adjlist[i].begin();
                par=i;
                while(itr!=adjlist[i].end())
                {
                    if(level[*itr]!=-1)
                    {
                        ++itr;
                        continue;
                    }
                    level[*itr]=lev+1;
                    parent[*itr]=i;
                    ++itr;
                }
            }
        }
    ++lev;
    }
}
int main()
{
    int v,e,v1,v2,i;
    cin>>v>>e;
    vector<list <int> > adjlist( v+1);
    for(i=0;i<e;i++)
    {
        cin>>v1>>v2;
        adjlist[v1].push_back(v2);
        adjlist[v2].push_back(v1);
    }
    int parents[v+1],level[v+1];
    for(i=1;i<=v;i++)
    {
    level[i]=-1;
    parents[i]=0;
    }
    bfs(adjlist,parents,level);
    for(i=1;i<adjlist.size();i++)
    {
      list<int> :: iterator itr= adjlist[i].begin();
        while(itr!=adjlist[i].end())
        {
            cout<<*itr<<" ";
            itr++;
        }
        cout<<"\n";
    }
    for(i=1;i<=v;i++)
    {
        cout<<i<<" "<<level[i]<<" "<<parents[i]<<"\n";
    }
 return 0;
}
