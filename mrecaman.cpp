#include<bits/stdc++.h>
using namespace std;
int main() {
	long long ar[500009];
	ar[0]=0;
	set<long long> se;
	se.insert(0);
	for(int i=1;i<=500000;i++) {
		long long k=ar[i-1]-i;
	//	printf("%lld ",k);
		if((k>0)&&(se.find(k)==se.end()))
			ar[i]=k;
		else
			ar[i]=ar[i-1]+i;
		se.insert(ar[i]);
	}
	//for(int i=0;i<20;i++) {
	//	printf("%lld ",ar[i]);
	//}
	int y;
	while(1) {	
		scanf("%d",&y);
		if(y==-1)
			break;
		else {
			printf("%lld\n",ar[y]);	
		}
	}
	return 0;
}
