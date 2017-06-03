#include<bits/stdc++.h>
using namespace std;
long long cache[10001][2];
int n;
long long dp(long long ar[],int set,int i){
	if(i==n)return 0;
	if(cache[i][set]!=-1)
		return cache[i][set];
	if(set==0)return cache[i][set]=max(dp(ar,1,i+1),dp(ar,0,i+1));
	else return cache[i][set]=ar[i]+dp(ar,0,i+1);
	}
int main(){
	int t;
	scanf("%d",&t);
	int k=1;
	while(t--){
		memset(cache,-1,sizeof(cache));
		scanf("%d",&n);
		long long ar[n];
		for(int i=0;i<n;i++)scanf("%lld",&ar[i]);
		printf("Case %d: %lld",k,max(dp(ar,0,0),dp(ar,1,0)));
		k++;
	}
	return 0;
}
