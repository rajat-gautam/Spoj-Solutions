#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int n,m;

int cache[101][101];
int dp(int ar[100][100],int i,int j) {
	if(i==n-1) {
		return ar[i][j];
	}
	if(cache[i][j]!=-1){
		return cache[i][j];
	}
	if(j==0) {
		return cache[i][j]=min(dp(ar,i+1,j),dp(ar,i+1,j+1))+ar[i][j]  ;
	}
	if(j==m-1) {
		return cache[i][j]=min(dp(ar,i+1,j),dp(ar,i+1,j-1))+ar[i][j];	
	}
	return cache[i][j]=min(min(dp(ar,i+1,j),dp(ar,i+1,j+1)) ,dp(ar,i+1,j-1))+ar[i][j] ;
}

int main() {
	scanf("%d %d",&n,&m);
	int ar[100][100];
	memset(ar,0,100*100);
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			scanf("%d",&ar[i][j]);
		}
	}
	int min=10000000;
	for(int j=0;j<m;j++) {
	memset(cache,-1,101*101);
		if(dp(ar,0,j)<min) {
			min=dp(ar,0,j);
		}
	}
	printf("%d",min);
	return 0;
}

