#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long a,b;
		scanf("%lld %lld",&a,&b);
		if(a<b) {
			if(a%2==1) {
				printf("R\n");		
			}
			else {
				printf("L\n");
			}
		}
		else if(a>b) {
			if(b%2==1) {
				printf("D\n");
			}
			else {
				printf("U\n");
			} 
		}
		else {
			if(a%2==0) {
				printf("L\n");
			}
			else {
				printf("R\n");
			}
		}
	}
	return 0;
}
