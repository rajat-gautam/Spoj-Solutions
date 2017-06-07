#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	long long a,b;
	while(t--) {
		scanf("%lld %lld",&a,&b);
		for(long long i=a;i<=b;i++) {
			int k=1;
			for(long long j=2;j*j<=i;j++) {
				if(i%j==0) {
					k=0;
					break;
				}
			}
			if(k==1&&i!=1) {
				printf("%lld\n",i);
			}
		}
		printf("\n");
	}
	return 0;
}
