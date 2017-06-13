#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
#define pb push_back
int main() {
	int n;
	scanf("%d",&n);
	int e;
	scanf("%d",&e);
	int t;
	scanf("%d",&t);
	int ed;
	scanf("%d",&ed);
	vector <ii> v[n+1];
	int a,b,w;
	for(int i=0;i<ed;i++) {
		scanf("%d %d %d",&a,&b,&w);
		v[a].pb(make_pair(w,b));
	}
	priority_queue<ii,vector<ii>,greater<ii> > Q;
	int dist[n+1];
	int count=0;
	for(int i=1;i<n+1;i++) {

		for(int j=1;j<n+1;j++) {
			dist[j]=100000;
		}
		dist[i]=0;
		Q.push(make_pair(0,i));	
		while(!Q.empty()) {
			int u=Q.top().second;
			Q.pop();
			vector<ii>::iterator it=v[u].begin();
			while(it!=v[u].end()) {
				int v=(*it).second;
				int w=(*it).first;
				if(dist[v]>dist[u]+w) {
					dist[v]=dist[u]+w;
					Q.push(make_pair(dist[v],v));
				}
				it++;
			}
		}
		
		if(dist[e]<=t){
	//		printf("%d %d",i,dist[e]);
			count++;
		} 
	}
	printf("%d",count);
	return 0;
}
