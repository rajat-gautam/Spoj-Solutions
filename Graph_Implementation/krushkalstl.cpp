#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<list>
using namespace std;
int main()
{
    int n,m,u,v,w,i;
    cin>>n>>m;
    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > Q;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        Q.push(make_pair(w,make_pair(u,v)));
    }
    map<int,int> connected;
    for(i=1;i<=n;i++)
            connected[i]=i;
    vector<pair<int,pair<int,int> > > mst;
    while(!Q.empty())
    {
        u=Q.top().second.first;
        v=Q.top().second.second;
        w=Q.top().first;
        int parent_u=connected[u];
        int parent_v=connected[v];
        if(parent_u!=parent_v)
        {
         mst.push_back(make_pair(w,make_pair(u,v)));
         for(i=1;i<=n;i++)
         {
             if(connected[i]==parent_v)
                connected[i]=parent_u;

         }
        }
    Q.pop();
    }
    vector<pair<int,pair<int,int> > > :: iterator itr=mst.begin();
    while(itr!=mst.end())
    {
        cout<<(*itr).second.first<<" "<<(*itr).second.second<<" "<<(*itr).first<<"\n";
        itr++;
    }
    return 0;
}
