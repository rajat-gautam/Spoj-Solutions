#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(1) {
		scanf("%d",&n);
		if(n==0) {
			break;
		}
		int ar[n];
		for(int i=0;i<n;i++) {
			scanf("%d",&ar[i]);
		}
		stack<int> s;
		int k=1;
		int flag=0;
		for(int i=0;i<n;i++) {
	//		printf("i=%d ",i);
			if(ar[i]==k) {
	//			printf("A ");
				k++;	
				continue;
			}
			else if(!s.empty()) {
				if(s.top()==k) {
	//				printf("B ");
					s.pop();
					k++;
					i--;
					continue;
				}
				if(ar[i]<s.top()) {
					s.push(ar[i]);
				}
				else {
					flag=1;
					break;
				}

			}
			else if(s.empty()) {	
	//				printf("C");
					s.push(ar[i]);
			}
		}
		if(flag==1)
			printf("no\n");
		else
			printf("yes\n");
	}	
	return 0;
}	
