#include<bits/stdc++.h>
using namespace std;
int ar[8]={1,1,-1,-1,2,2,-2,-2};
int br[8]={2,-2,2,-2,1,-1,1,-1};
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char a[3],b[3];
		scanf("%s %s",a,b);
		queue<pair<int,int> > Q;
		int g=a[0]-'a'+1;
		int h=a[1]-'0';
		int j=b[0]-'a'+1;
		int k=b[1]-'0';
		//cout<<g<<h<<j<<k;
		Q.push(make_pair(g,h));
		bool visited[9][9];
		int level[9][9];
		memset(level,-1,sizeof(level));
		memset(visited,false,sizeof(visited));	
		level[g][h]=0;
		while(!Q.empty()) {
			int u1=Q.front().first;
			int u2=Q.front().second;
			visited[u1][u2]=true;
			Q.pop();
	//		cout<<u1<<" "<<u2;
			for(int i=0;i<8;i++) {
				int v1=u1+ar[i];
				int v2=u2+br[i];
				if(v1>=1&&v1<=8&&v2>=1&&v2<=8&&!visited[v1][v2]){
	//				cout<<"A";
					level[v1][v2]=level[u1][u2]+1;
					Q.push(make_pair(v1,v2));
				}
			}				
		}	
		printf("%d\n",level[j][k]);
	}
	return 0;
}
