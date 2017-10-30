#include<bits/stdc++.h>//no comment
using namespace std;
int main() {
	int n,m,l=1;
	while(1) {
		scanf("%d %d",&n,&m);
		if(n==0&&m==0) {
			break;
		}
		char ar[n][m];
		for(int i=0;i<n;i++) {
		
				scanf("%s",ar[i]);
			
		}
		vector<pair<int,int> > v;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(ar[i][j]=='A') {	
					v.push_back(make_pair(i,j));
				}
			}
		}
		vector<pair<int,int> >::iterator it=v.begin();
		stack<pair<int,int> > s;
		int visited[n][m];
		memset(visited,100,sizeof(visited));
		while(it!=v.end()) {
			visited[(*it).first][(*it).second]=1;
			s.push(make_pair((*it).first,(*it).second));
			while(!s.empty()) {
				int u=s.top().first;
				int v=s.top().second;
				s.pop();
				for(int i=-1;i<=1;i++) {
					for(int j=-1;j<=1;j++) {
						int u1=u+i;
						int v1=v+j;
						if(u1>=0&&u1<n&&v1>=0&&v1<m&&ar[u1][v1]==ar[u][v]+1&&visited[u][v]+1<visited[u1][v1]) {
							visited[u1][v1]=visited[u][v]+1;
							s.push(make_pair(u1,v1));
						}	
					}
				}
			}
			it++;			
		}
		//printf("\n");
		int max=0;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				
				if(visited[i][j]!=1684300900&&visited[i][j]>max) {
					max=visited[i][j];
				}
			}
		//	printf("\n");
		}
		printf("Case %d: %d\n",l,max);
		l++;
	}
	return 0;
}		
