#include<bits/stdc++.h>
using namespace std;
#define mod 10000007
long long power(long long n,long long k) {
	if(k==0)
		return 1;
	if(k==1)
		return n%mod;
	long long q=power(n,k/2)%mod;
	if(k%2==0)
		return (q*q)%mod;
	if(k%2==1)
		return (((q*q)%mod)*(n)%mod)%mod;
}
int main() {
	long long n,k;
	while(1) {
		scanf("%lld %lld",&n,&k);
		if(n==0&&k==0)
			break;
		long long ans;
		ans=power(n,k)%mod;
		ans=((ans)+(power(n,n)))%mod;
		ans=(ans+(2*(power(n-1,k)+power(n-1,n-1))%mod)%mod)%mod;
		printf("%lld\n",ans);
	}
	return 0;
}
