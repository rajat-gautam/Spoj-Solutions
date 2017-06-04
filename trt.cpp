#include<bits/stdc++.h>
using namespace std;
int ar[2005];
long long cache[2005][2005];
long long dp(int min,int max1,int age) {
	if(min==max1) {
		return ar[min]*age;
	}
	if(cache[min][max1]!=-1)
		return cache[min][max1];
	return cache[min][max1]=max(dp(min+1,max1,age+1)+ar[min]*age,dp(min,max1-1,age+1)+ar[max1]*age);
}
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&ar[i]);
	}
	memset(cache,-1,sizeof(cache));
	printf("%lld",dp(0,n-1,1));
	return 0;
}
