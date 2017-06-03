#include<bits/stdc++.h>
using namespace std;
#define LIM 10001
bool isvisited[LIM];
vector<int> adj[LIM];
vector<int> level(LIM);
vector<int> parent(LIM);
void bfs(int start){
	isvisited[start]=true;
	int cur,i,next;
	queue<int> q;
	q.push(start);
	level[start]=0;
	parent[start]=0;
	while(!q.empty()){
	cur=q.front();
	q.pop();
	//printf("%d ",cur);
	for(i=0;i<adj[cur].size();i++){
		next=adj[cur][i];
		if(!isvisited[next]){
			level[next]=level[cur]+1;
			parent[next]=cur;
			isvisited[next]=true;
			q.push(next);	
		}
	}
	}
	//printf("\n");
}
int main(){
int v;
scanf("%d",&v);
v=v-1;
int i,v1,v2;
while(v--){

	scanf("%d%d",&v1,&v2);
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
}
for(i=0;i<10001;i++){
	level[i]=-1;
}
bfs(1);
int max=0,s;
for(i=0;i<10001;i++)
	if(level[i]>max){max=level[i];s=i;}
for(i=0;i<10001;i++){
	level[i]=-1;
	isvisited[i]=false;
}
bfs(s);
max=0;
for(i=0;i<10001;i++)
	if(level[i]>max){max=level[i];}
printf("%d",max);
return 0;
}
