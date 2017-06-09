#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<cstring>
using namespace std;
typedef pair<int,pair<int,int> > PII;
int main()
{
    int u,v,w,n,m,i,s;
    cin>>n>>m;
    vector<list<PII> > vec(n+1);
    vector<PII > mst;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        vec[u].push_back(make_pair(w,make_pair(u,v)));
        vec[v].push_back(make_pair(w,make_pair(v,u)));

    }
    cin>>s;
    priority_queue<PII,vector<PII>,greater<PII> > Q;
    list<PII> ::iterator itr=vec[s].begin();
    Q.push(make_pair((*itr).first,make_pair((*itr).second.first,(*itr).second.second)));
    int ve[n+1][n+1];
    memset(ve,-1,n+1*n+1);
    int count=0;
    while(!Q.empty()&&count<n-1)
    {
        cout<<"a";
        u=Q.top().second.first;
        v=Q.top().second.second;
        w=Q.top().first;
        Q.pop();
        if(ve[u][v]!=1||ve[v][u]!=1)
        {

             mst.push_back(make_pair(w,make_pair(u,v)));;

        }
        count++;

        mst.push_back(make_pair(w,make_pair(u,v)));
        ve[u][v]=1;


        itr=vec[u].begin();
        while(itr!=vec[u].end())
        {       cout<<"b"<<(*itr).second.second;
                Q.push(make_pair((*itr).first,make_pair((*itr).second.second,(*itr).second.first)));
                itr++;

        }
    }
    vector<PII>::iterator it=mst.begin();
    while(it!=mst.end())
    {
        cout<<(*it).second.first<<" "<<(*it).second.second<<" "<<(*it).first<<"\n";
        it++;
    }


return 0;
}
