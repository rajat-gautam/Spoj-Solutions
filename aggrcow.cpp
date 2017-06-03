#include<bits/stdc++.h>
using namespace std;
int n,c;
bool func(int x,int ar[]) {
	int cows=1,pos=ar[0];
	for(int i=1;i<n;i++) {
		if(ar[i]-pos>=x) {
			pos=ar[i];
			cows++;
			if(cows==c) {
				return true;
			}
		}
	}	
	return false;
}
int bs(int ar[]) {
	int low=0,high=ar[n-1],mid,max=-1;
	while(high>low) {
	mid=(low+high)/2;
	if(func(mid,ar)) {
		if(mid>max)
		max=mid;
		low=mid+1;
	}
	else {
		high=mid;
	}
	}
	return max;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&n,&c);
		int ar[n];
		for(int i=0;i<n;i++) {
			scanf("%d",&ar[i]);
		}
		sort(ar,ar+n);
		int k=bs(ar);
		printf("%d\n",k);
	}
}
