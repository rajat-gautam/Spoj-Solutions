#include<bits/stdc++.h>
using namespace std;
int power(int n,int k,int mod) {
	if(k==0) return 1;
	int x=power(n,k/2,mod)%mod;
	if(k&1) return (((x*x)%mod)*n)%mod;
	else return (x*x)%mod;
}
bool miller(int d,int n){
	int a=2+rand()%(n-4);
	int x=power(a,d,n);
	if(x==1||x==n-1) return true;
	while(d!=n-1) {
		x=(x*x)%n;
		d*=2;
		if(x==1) return false;
		else if(x==n-1) return true;
	}
	return false;
}
bool isprime(int n,int k){
	if(n<=1||n==4)return false;
	if(n<4)return true;
	int d=n-1;
	while(d%2==0) d=d/2;
	for(int i=0;i<k;i++) {
		if(!miller(d,n))
			return false;
	}
	return true;
}	 
int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	if(isprime(n,k))
		printf("true\n");
	else
		printf("false\n");
}
