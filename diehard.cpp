#include<bits/stdc++.h>
using namespace std;
int cache[1001][1001][3];
int dp(int h,int a,int l) {
	if(h<=0||a<=0) {
		return 0;
	}
	if(cache[h][a][l]!=-1)
		return cache[h][a][l];
	if(l==0)
		return cache[h][a][l]=max(dp(h-5,a-10,1)+1,dp(h-20,a+5,2)+1);
	else if(l==1)
		return cache[h][a][l]=dp(h+3,a+2,0)+1;
	else
		return cache[h][a][l]=dp(h+3,a+2,0)+1;
}
int main() {
	int t;
	scanf("%d",&t);
	int h,a;
	while(t--) {
		scanf("%d %d",&h,&a);
		memset(cache,-1,sizeof(cache));
		printf("%d\n",max(max(dp(h+3,a+2,0),dp(h-5,a-10,1)),dp(h-20,a+5,2)));
	}
	return 0;
}
