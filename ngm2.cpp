#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	scanf("%lld",&n);
	long long d;
	long long k,l;
	//memset(ar,0,sizeof(ar));
	//for(int i=0;i<n+1;i++) {
	//	printf("%lld ",ar[i]);
	//}
	set<long long> s;
	scanf("%lld",&k);
	while(k--) {
		scanf("%lld",&l);
		d=n/l;
		for(long long i=1;i<=d;i++) {
			s.insert(l*i);
		}	
	}
	long long count=s.size();
	//for(long long  i=1;i<=n;i++){
	//	if(ar[i]==0)
	//	count++;
	//}
	printf("%lld",n-count);
	return 0;
}
