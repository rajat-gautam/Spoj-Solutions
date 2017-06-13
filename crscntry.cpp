#include<bits/stdc++.h>
using namespace std;
int ar[2005],br[2005],n,m;
int cache[2005][2005];
int dp(int n,int m){
	if(n==-1||m==-1)
		return 0;
	if(cache[n][m]!=-1)
		return cache[n][m];
	if(ar[n]==br[m]) {
		return cache[n][m]=dp(n-1,m-1)+1;
	}
	else
		return cache[n][m]=max(dp(n-1,m),dp(n,m-1));
}
int main() {
	int t;
	scanf("%d",&t);
	int a,b,c,i;
	while(t--) {
		i=0;
		while(1) {
			scanf("%d",&a);
			if(a==0)
				break;
			ar[i]=a;
			i++;
	//		printf("A");
			
		}
		int max=0;
		while(1) {
	//		printf("B");
			scanf("%d",&b);
			if(b==0)
				break;
			else {
				br[0]=b;
				int j=1;
				while(1) {
					scanf("%d",&c);
					if(c==0)
						break;
					br[j]=c;
					j++;
				}
				memset(cache,-1,sizeof(cache));
	//			printf("%d %d",i,j);
				int k=dp(i-1,j-1);
	//			printf("k=%d\n",k);
				if(k>max)
					max=k;		
			}
		}
		printf("%d\n",max);			
	}
	return 0;
}
