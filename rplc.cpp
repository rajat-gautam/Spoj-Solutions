#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,y=1;	
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		long long ar[n];
		for(long long i=0;i<n;i++) {
			scanf("%lld",&ar[i]);
		}
		long long min=0;
		if(ar[0]<min)
			min=ar[0];
		long long diff=ar[0];
		for(long long i=1;i<n;i++) {
			diff=diff+ar[i];
		//	printf("%lld ",diff);
			if(diff<min) {
				min=diff;
			}
		}
		printf("Scenario #%d: %lld\n",y,-1*(min-1));
		y++;
	}
	return 0;
}
