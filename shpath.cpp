#include<bits/stdc++.h>
using namespace std;
const long long int INF = 2000000000;
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		vector<pair<int,int> > vec[n+1];
		char ar[11];
		int e;
		map<string,int> map;
		for(int i=1;i<=n;i++) {	
			scanf("%s",ar);
			map[ar]=i;
			scanf("%d",&e);
			int a,b;
			while(e--) {
				scanf("%d %d",&a,&b);
 				vec[i].push_back(make_pair(a,b));
			}
		}
		int r;
		scanf("%d",&r);
		char y[11],z[11];
		int u,v;
		priority_queue <pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > Q;
		int dist[n+1];
		while(r--) {
			for(int i=0;i<n+1;i++) {
				dist[i]=INF;
			}
			scanf("%s %s",y,z);
			u=map[y];
			v=map[z];
			dist[u]=0;
			Q.push(make_pair(0,u));
			while(!Q.empty()) {
				int c=Q.top().first;
				int u1=Q.top().second;
				Q.pop();
				vector<pair<int ,int > > ::iterator it=vec[u1].begin();
				while(it!=vec[u1].end()) {
					int w=(*it).second;
					int v1=(*it).first;
					if(dist[v1]>dist[u1]+w) {
						dist[v1]=dist[u1]+w;
						Q.push(make_pair(dist[v1],v1));					
					}
				it++;
				}
			}
			printf("%d\n",dist[v]);
		}
	}
	return 0;
}	
				



