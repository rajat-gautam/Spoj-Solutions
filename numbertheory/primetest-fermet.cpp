#include<bits/stdc++.h>
using namespace std;
int power(int a,int k,int mod) {
	if(k==0)return 1;
	int x=power(a,k/2,mod);
	if(k&1) return (((x*x)%mod)*a)%mod;
	else return (x*x)%mod;
}
bool fermet(int n,int k) {
	if(n==1||n==4)
		return false;
	if(n<=3)
		return true;	
	while(k>0) {
		int a = 2 + rand()%(n-4) ;	
		if(power(a,n-1,n)!=1)
			return false;
		k--;	 	
	}
	return true;
}
int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	bool flag=fermet(n,k);
	if(flag==true)	
		printf("Prime");
	else 
		printf("Not Prime");
	return 0;	
}
