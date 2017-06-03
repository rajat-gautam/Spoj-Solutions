#include<bits/stdc++.h>
#define LIM 20001
bool isvisited[LIM];
std::vector<int> adj[LIM];
std::vector<int> parent(LIM);
using namespace std;
void bfs(int start){
	int cur,next,i;
	isvisited[start]=true;
	queue<int> q;
	q.push(start);
	while(!q.empty()){
		cur=q.front();
		q.pop();
		for(i=0;i<adj[cur].size();i++){
			next=adj[cur][i];
			if(!isvisited[next]){
				isvisited[next]=true;
				q.push(next);		
			}
		}
	}
}
int main(){
	int v,e;
	scanf("%d%d",&v,&e);
	int v1,v2;
	for(int i=0;i<LIM;i++)parent[i]=-1;
	for(int i=0;i<e;i++){
		scanf("%d%d",&v1,&v2);
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}
	if(e>=v){printf("NO");return 0;}
	int k=0;
	bfs(1);
	for(int i=1;i<=v;i++){
		if(!isvisited[i])k=1;
	}
	if(k==0)printf("YES");
	else printf("NO");
	return 0;
}
