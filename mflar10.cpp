#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(1) {
		getline(cin,s);
		int l=s.length();
		
		char a=toupper(s[0]);
		if(a=='*')
			break;
		vector<int> v;
		for(int i=0;i<l;i++) {
			if(s[i]==' ')	
				v.push_back(i);
		}
		int k=0;
	//	printf("as%c\n",isupper(a));
	//	printf("as%c\n",islower(a));
		for(int i=0;i<v.size();i++) {	
	//		printf("%d ",v[i]);
			if(toupper(s[v[i]+1])==a)
				k++;
		}
	//	printf("k=%d",k); 
		if(k==v.size())
			printf("Y\n");
		else 
			printf("N\n");
	}
	return 0;
}

