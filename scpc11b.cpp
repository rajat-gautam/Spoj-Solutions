#include<bits/stdc++.h>
using namespace std;
int diff(int a,int b) {
	return a>b ? a-b : b-a;
}
int main() {
	while(1) {
		int n;
		scanf("%d",&n);
		if(n==0)break;
		int ar[n];
		for(int i=0;i<n;i++) {
			scanf("%d",&ar[i]);
		}
		sort(ar,ar+n);
		int flag=1;
		for(int i=0;i+1<n;i++) {
			if((ar[i+1]-ar[i])>200) {
				flag=0;
	//			printf("%d %d",ar[i+1],ar[i]);
	//			printf("a");
				break;
			}
		}
		if(1422-ar[n-1]>100) {
	//		printf("b");
			flag=0;
		}
		if(flag==1)
  			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}

