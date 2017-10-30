#include<bits/stdc++.h>//nocomment
using namespace std;
int main() {
	int a,b,c;
	while(1) {
		scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0) {
			break;
		}
		if(c-b==b-a) {
			printf("AP %d\n",c+b-a);
		}
		else {
			printf("GP %d\n",c*(b/a));	
		}
	}
	return 0;
}
