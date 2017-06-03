#include<bits/stdc++.h>
using namespace std;
int main() {
	long long t;
	scanf("%lld",&t);
	long long n,a,count;
	string s;
	while(t--) {
		scanf("%lld",&n);
		long long ar[n];
		for(long long i=0;i<n;i++) {
			cin>>s;
			scanf("%lld",&ar[i]);
		}
		sort(ar,ar+n);
		count=1;
		long long sum=0,k;
		for(long long i=0;i<n;i++) {
			k=ar[i]-count;
			if(k<0)k=-k;
		//	printf("%d ",k);
			sum=sum+k;
			count++;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
		

