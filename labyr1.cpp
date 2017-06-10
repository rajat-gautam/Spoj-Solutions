#include<bits/stdc++.h>
using namespace std;
int a[]={1,0,-1,0};
int b[]={0,1,0,-1};
int main () {
	int t;
	scanf("%d",&t);
	int n,m;
	while(t--) {
		scanf("%d %d",&m,&n);
		char ar[n][m];
		for(int i=0;i<n;i++) {
			scanf("%s",ar[i]);
		}
		int ans[n][m];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(ar[i][j]=='#')
					ans[i][j]=1000000;
				else
					ans[i][j]=0;
			}
		}
		bool visited[n][m];
		memset(visited,false,sizeof(visited));
		int i,j,flag=0;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				if(ans[i][j]==0){
					flag=1;
					break;
				}			
			}
			if(flag==1)
				break;
		}
		queue<pair<int,int> > Q;
		Q.push(make_pair(i,j));
		while(!Q.empty()) {
			int u=Q.front().first;
			int v=Q.front().second;
			Q.pop();
			visited[u][v]=true;
			for(int k=0;k<4;k++) {
				int u1=u+a[k];
				int v1=v+b[k];
				if(u1>=0&&u1<n&&v1>=0&&v1<m&&ans[u1][v1]<ans[u][v]+1&&!visited[u1][v1]) {	
					ans[u1][v1]=ans[u][v]+1;
					Q.push(make_pair(u1,v1));
				}
			}
		}
		int i2,j2,max=-1;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(ans[i][j]>max&&ans[i][j]!=1000000) {
					max=ans[i][j];
					i2=i;
					j2=j;
	//				cout<<" a"<<max<<" ";
				}
			}
		}
	//	cout<<i2<<" "<<j2;	
		Q.push(make_pair(i2,j2));
		memset(visited,false,sizeof(visited));
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(ar[i][j]=='#') {
					ans[i][j]=1000000;
				}	
				else
					ans[i][j]=0;
			}
		}
		while(!Q.empty()) {	
			int u=Q.front().first;
			int v=Q.front().second;
			Q.pop();
			visited[u][v]=true;
			for(int k=0;k<4;k++) {
				int u1=u+a[k];
				int v1=v+b[k];
				if(u1>=0&&u1<n&&v1>=0&&v1<m&&ans[u1][v1]<ans[u][v]+1&&!visited[u1][v1]) {
					ans[u1][v1]=ans[u][v]+1;
					Q.push(make_pair(u1,v1));
				}
			}		
		}
		int m2=-1;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
	//			printf("%d ",ans[i][j]);
				if(ans[i][j]>m2&&ans[i][j]!=1000000)
					m2=ans[i][j];
			}
	//`		printf("\n");
		}
		printf("Maximum rope length is %d.\n",m2);
	}
	return 0;
}
