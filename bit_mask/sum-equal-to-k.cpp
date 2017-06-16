#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	int ar[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&ar[i]);
	}
	int count=0;
	for(int mask=0;mask<(1<<n);mask++) {
		int sum=0;
		for(int i=0;i<n;i++) {
			if(mask&(1<<i)) {
				sum=sum+ar[i];
			}	
		}
		printf("%d ",sum);
		if(sum==k)
			count++;
	}
	printf("%d",count);
	return 0;
}
