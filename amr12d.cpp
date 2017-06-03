#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;	
	scanf("%d",&t);
	while(t--) {
	string s;
	cin>>s;
	int l=s.length();
	int k=0;
	for(int i=0;i<l/2;i++) {
		if(s[i]!=s[l-i-1]){
			k=1;
			printf("NO\n");
			break;
		}
	}
	if(k==0)
		printf("YES\n");
	}
	return 0;
}
