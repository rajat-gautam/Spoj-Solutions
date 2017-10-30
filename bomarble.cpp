#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n//;
	while(1) {
		scanf("%lld",&n);
		if(n==0) {
			break;
		}
		long long ans=5;
		long long u4=n-1;
		ans=ans+u4*4;	
		long long i=1;
		while(u4--) {
			ans=ans+i*3;
			i++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
