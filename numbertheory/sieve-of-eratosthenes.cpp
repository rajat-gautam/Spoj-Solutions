#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
#define MAX 100000
void sieve() {
	vector<bool> sieve(MAX+1);
	fill(sieve.begin(),sieve.end(),true);
	for(int i=2;i*i<=MAX;i++) {
		if(sieve[i]) {
			for(int j=i*i;j<=MAX;j=j+i) {
				sieve[j]=false;
			}
		}
	}
	for(int i=2;i<=MAX;i++) {
		if(sieve[i])
			prime.push_back(i);
	}	
}	
int main() {
	sieve();
	for(int i=0;i<prime.size();i++) {
		printf("%d ",prime[i]);
	}
	printf("A");
	return 0;
}
