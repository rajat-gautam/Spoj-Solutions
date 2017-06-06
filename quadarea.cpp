#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;	
	scanf("%d",&t);
	double a,b,c,d,s,area;
	while(t--) {
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		area=(s-a)*(s-b)*(s-c)*(s-d);
		area=pow(area,0.5);
		printf("%.2lf\n",area);
	}
	return 0;
}
