#include<bits/stdc++.h>
using namespace std;
int main() {
	char str[2001];
	int k=1;
	while(true) {
		stack<char> s;
		scanf("%s",str);
		if(str[0]=='-') {
			break;
		}
		int n,l=strlen(str);
		int count=0;
		if(str[0]=='{') {
			s.push(str[0]);
		}
		else {
			count++;
			s.push('{');
		}
		for(int i=1;i<l;i++) {
			if(str[i]=='{') {
				s.push(str[i]);
			}
			else {	
				if(!s.empty()) {
					s.pop();
		//			printf("A");
				}
				else {
					count++;	
					s.push('{');
		//			printf("B");
				}
			}
		}
	//	cout<<s.size();
	//	printf("%d\n",count);
		count=count+(s.size()/2);
		printf("%d. %d\n",k,count);
		k++;
		}
		return 0;
}
		
