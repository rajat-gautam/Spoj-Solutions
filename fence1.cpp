#include<bits/stdc++.h>
using namespace std;
int main(){
	double a;
	while(1){
		scanf("%lf",&a);
		if(a==0)break;
		printf("%.2f",((a*a)/3.14159)/2);
	}
	return 0;
}
