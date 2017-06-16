#include<bits/stdc++.h>
using namespace std;
#define MOD 10000007
#define ll long long
ll power(ll n,ll k) {
	if(k==0) return 1;
	ll x=power(n,k/2);
	if(k&1) return ( ( ( x * x) % MOD ) * n ) % MOD ;
	return ( x * x ) % MOD ;
}
int main() {
	ll n,k;
	scanf("%lld %lld",&n,&k);
	printf("%lld",power(n,k));
	return 0;
}
