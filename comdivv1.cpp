#include<bits/stdc++.h>
using namespace std;
int divisor(int n,int m) {
	int count=0,k,k1,k2,i;
	n<m ? k=n :k=m;
	n>m ? k2=n :k2=m;
	k1=__gcd(n,m);
	for(i=1;i*i<=k1;i++) {
		if(k1%i==0) {
					count=count+2;
		}
					
	}
	i=i-1;
	if(i*i==k1)count--;
		
	
	return count;
}
int main() {
	int t;
	scanf("%d",&t);
	int a,b,k;
	while(t--) {
		scanf("%d %d",&a,&b);
		//k=divisor(b);
		printf("%d\n",divisor(a,b));;
	}
	return 0;
}

