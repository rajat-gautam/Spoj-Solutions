#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	int n,m;
	while(t--) {
	scanf("%d",&n);
	int ar[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&ar[i]);
	}
	scanf("%d",&m);
	int br[m];
	for(int i=0;i<m;i++) {
		scanf("%d",&br[i]);
	}
	int min=999999;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
		int k=ar[i]-br[j];
		k<0 ? k=-k : k=k;
		k<min ? min=k : min=min;
		}	
	}
	printf("%d\n",min);
	}
	return 0;
}

