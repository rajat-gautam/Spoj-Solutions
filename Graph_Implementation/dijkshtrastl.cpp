#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<list>
#include<queue>
using namespace std;
const long long int INF = 2000000000;
typedef pair<long long int,long long int> PII;
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
        long long int i,u,c,d,vm;
        long long int v,e,v1,v2,w,s;
        cin>>v>>e;
        vector<list<PII> > vec(v+1);
        for(i=0;i<e;i++)
            {
            cin>>v1>>v2>>w;
            vec[v1].push_back(make_pair(v2,w));
            vec[v2].push_back(make_pair(v1,w));
            }
        cin>>s;
        priority_queue <PII,vector<PII>,greater<PII> > Q;
        long long int dist[v+1];
        for(i=0;i<v+1;i++)
            dist[i]=INF;
        Q.push(make_pair(0,s));
        dist[s]=0;
        while(!Q.empty())
            {
            u =Q.top().second;
            c=Q.top().first;
            Q.pop();
            if(dist[u]<c)continue;
            list<PII>::iterator itr;
            itr=vec[u].begin();
            while(itr!=vec[u].end())
            {
                vm=(*itr).first;
                w=(*itr).second;
                if(dist[vm]>dist[u]+w)
                    {
                    dist[vm]=dist[u]+w;
                    Q.push(make_pair(dist[vm],vm));
                    }
                ++itr;
            }

            }


        for(i=1;i<v+1;i++)
            {
            if(dist[i]!=0)
                {
                if(dist[i]==INF)
                    cout<<"-1"<<" ";
                 else
                cout<<dist[i]<<" ";
                }

            }
        cout<<"\n";
    }
    return 0;
}
