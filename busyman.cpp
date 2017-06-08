#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		vector<pair<int,int> > v(n);
		int a,b;
		for(int i=0;i<n;i++) {
			scanf("%d %d",&a,&b);
			v[i].first=b;
			v[i].second=a;
		}
		sort(v.begin(),v.end());
		int k=1;
		int j=v[0].first;
		for(int i=1;i<n;i++) {
	//		printf("A ");
			if(v[i].second >= j) {
				k++;	
	//			printf("B ");
				j=v[i].first;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}
