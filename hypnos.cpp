#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	scanf("%lld",&n);
	set<long long int> se;
	se.insert(n);
	long long y=0,count=0,ans;
	while(1) {
	//	printf(" A ");
	//	printf("%lld ",n);
		while(n!=0) {
			ans=n%10;
			y=y+ans*ans;
			n=n/10;
			
		}	
		count++;
		if(y==1) {
			printf("%lld",count);
			break;		
		}	
		if(se.insert(y).second==false) {
			printf("-1");
			break;
		}
		n=y;
		y=0;
	}
	return 0;
}
