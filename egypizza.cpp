#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	int x,y;
	int p1=0,p2=0,p3=0;
	while(t--) {
		scanf("%d/%d",&x,&y);
		if((x==1)&&(y==4)) {
			p1++;
		}
		else if((x==1)&&(y==2)) {
			p2++;
		}
		else {
			p3++;
		}
	}
	int ans=0;
	if(p1>=p3) {
		ans=p3;
		p1=p1-ans;
		p3=0;
	}
	else {
		ans=p1;
		p1=0;
		p3=p3-ans;
		ans=ans+p3;
		p3=0;
	}
//	cout<<p1<<" "<<p2<<" "<<p3;
	if(p1>=p2) {
		int x=p1/2;
		if(p2>=x) {
			p2=p2-x;
			ans=ans+x;
			p1=p1%2;
		}
		else {
			ans=ans+p2;
			
			p1=p1-p2*2;
			p2=0;
		}
	}
//		cout<<p1<<" "<<p2<<" "<<p3;
	ans=ans+p1/4;
	p1=p1%4;
	ans=ans+p2/2;
	p2=p2%2;
	if(p2==0) {
		if(p1!=0)
		ans=ans+1;
	}
	else {
		if(p1<=2) {
			ans++;
		}
		else {
			ans+2;
		}
	}
	ans++;
//		cout<<p1<<" "<<p2<<" "<<p3;
	printf("%d",ans);
	return 0;
}
