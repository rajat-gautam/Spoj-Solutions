#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	scanf("%lld",&n);
	long long ar[n];
	for(int i=0;i<n;i++) {
		scanf("%lld",&ar[i]);
	}
	stack<int> s;
	for(long long i=0;i<n;i++) {
		if(ar[i]%2==1) {
			printf("%lld\n",ar[i]);
		}
		else {
			while(ar[i]!=0) {
				int k=ar[i]%2;
				ar[i]=ar[i]/2;
				s.push(k);
			}
			long long sum=0,i=0;
			while(!s.empty()) {
				sum=sum+(pow(2,i)*(s.top()));
				s.pop();
				i++;
			}
			printf("%lld\n",sum);	
		}
	}
	return 0;
}
