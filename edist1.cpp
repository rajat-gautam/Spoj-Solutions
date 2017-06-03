#include<bits/stdc++.h>
using namespace std;
int n,m;
int cache[2101][2101];
int main(){
	int t;
	scanf("%d",&t);
	string a,b;
	while(t--){
		for(int i=0;i<2101;i++)for(int j=0;j<2101;j++)cache[i][j]=0;
		cin>>a>>b;
		n=a.size();
		m=b.size();
		for(int i=0;i<n;i++){
			cache[i][0]=i;
		}
		for(int i=0;i<m;i++){
			cache[0][i]=i;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i-1]==b[j-1])cache[i][j]=cache[i-1][j-1];
				else {
					cache[i][j]=min(min(cache[i][j-1]+1,cache[i-1][j]+1),cache[i-1][j-1]+1);
				}
			}
		}
		printf("%d\n",cache[n][m]);
	}
	return 0;
}
