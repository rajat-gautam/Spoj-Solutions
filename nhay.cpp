#include<bits/stdc++.h>
using namespace std;
int kmp(string n1,string h) {
	int l;
	l=n1.length();
	int lps[l];
	lps[0]=0;
	int len=0;
	int i=1;
	int flag=0;
	while(i<l) {
	//	printf("A");
		if(n1[i]==n1[len]) {
			len++;
			lps[i]=len;
			i++;
		}
		else {
			if(len==0) {
				lps[i]=len;
				i++;
			}
			else {
				len=lps[len-1];
			}
		}	
	}
	int m=h.length();
	int j=0;
	i=0;
	//for(i=0;i<l;i++)
	//	printf("a%d ",lps[i]);
	while(i<m) {
	//	printf("%d ",i);
		if(n1[j]==h[i]) {
			i++;
			j++;
		}
		if(j==l) {
	//		printf("A");
			printf("%d\n",i-j);
			j=lps[j-1];
			flag=1;
		}
		else if(i<m&&n1[j]!=h[i]) {
			if(j!=0) {
	//			printf("B");
				j=lps[j-1];
			}
			else {
	//			printf("C");
				i=i+1;
			}
		}
	}
	return flag;
}
int main() {
	int n;
	string n1,h;
	while(scanf("%d",&n)==true){
		cin>>n1;
		cin>>h;	
		int f=kmp(n1,h);
		printf("\n");
	}
	return 0;
}
