#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,a;
	scanf("%lld",&n);
	while(n--) {
		scanf("%lld",&a);
		long long b=pow(a,0.5);
	//	printf("%lld ",b);
		long long num,k=0;
		long long y;
		for(long long i=0;i<=b;i++) {
			num=a-(i*i);
		//	printf("%lld ",num);
			y=pow(num,0.5);
			if(num==y*y) {
				printf("Yes\n");
						
				k=1;
				break;
			}
		}
		if(k==0) {
			printf("No\n");
		}
	}
	return 0;
}
