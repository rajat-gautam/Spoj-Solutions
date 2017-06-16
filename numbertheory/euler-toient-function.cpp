//Count of all relatively primes with respect to n upto n ;
//$(n) = n * (1 - 1/p) ;
#include<bits/stdc++.h>
using namespace std;
int etf(int n) {
	float result = n ;
	for(int i=2;i*i<=n;i++) {
		if(n%i==0) { 
			while(n%i==0)
				n=n/i;
			result=result * (1.0 - (1.0/(float)i)); 	
		}
			
	}
	if(n>1)
		result=result * (1.0 - (1.0/(float)n));		
	return (int)result;
}
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",etf(n));
	return 0;
}
