#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;	
	scanf("%d",&t);
	while(t--) {
		int n,m,p;
		scanf("%d %d %d",&n,&m,&p);
		int ar[n];
		for(int i=0;i<n;i++)
			scanf("%d",&ar[i]);
		sort(ar,ar+n);
		int i=n-1,k=0;
		while(i!=0){
			while(ar[i]-p>0)
			{
			ar[i]=ar[i]-p;
			m--;
			}
			i=(i-1);
		}
		m>0 ? printf("NO\n") : printf("YES\n");
	}	
	return 0;
}
