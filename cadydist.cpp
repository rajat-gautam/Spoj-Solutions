#include<bits/stdc++.h>
using namespace std;
int main() {
	while(1){
	//cout<<"A";
	long long n;
	cin>>n;
	if(n==0)break;
	long long clas[n];
	for(int i=0;i<n;i++) {
		cin>>clas[i];
	}
	long long price[n];
	for(int i=0;i<n;i++) {
		cin>>price[i];
	}
	sort(clas,clas+n);
	sort(price,price+n);
	long long sum=0;
	for(int i=0;i<n;i++) {
		sum=sum+price[i]*clas[n-1-i];
	}
	cout<<sum<<"\n";	
	}
	return 0;

}
	
