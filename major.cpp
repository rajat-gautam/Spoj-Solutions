#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	long long n;
	scanf("%lld",&n);
	long long ar[n];
	for(long long i=0;i<n;i++) {
		scanf("%lld",&ar[i]);
	}
	sort(ar,ar+n);
	long long k=(n/2);
	int y=0;
	for(long long i=0;i<(n/2)+(n%2);i++) {
		if(ar[i]==ar[i+k]) {
			y=1;
			printf("YES %lld\n",ar[i]);
			break;
		}
	}
	if(y==0)
	printf("NO\n");
	}
	return 0;
}



