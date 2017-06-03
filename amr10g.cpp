#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int k,n;
	while(t--){
		scanf("%d %d",&n,&k);
		long long ar[n];
		for(int i=0;i<n;i++){	
				scanf("%lld",&ar[i]);
		}
		sort(ar,ar+n);
		long long min=1000000000000;
		for(int i=0;i<=n-k;i++){
			if(ar[i+k-1]-ar[i]<min)
			min=ar[i+k-1]-ar[i];
		}
		printf("%lld\n",min);
	}
	return 0;
}
