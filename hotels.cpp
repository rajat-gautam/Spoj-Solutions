#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,m;
	scanf("%lld %lld",&n,&m);
	int ar[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&ar[i]);
	}
	long long ans=0,max=0;
	int j=0;

	for(int i=0;i<n;i++) {
		ans=ans+ar[i];
		while(ans>m) {
			ans=ans-ar[j];
			j++;
		}
		if(ans>max)
			max=ans;
	}
	printf("%lld",max);
	return 0;
}


