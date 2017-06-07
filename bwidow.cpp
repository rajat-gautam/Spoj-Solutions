#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		vector<pair<pair<long long ,long long>,long long  > > v;
		long long a,b,k=1;
		for(int i=0;i<n;i++) {
			scanf("%lld %lld",&a,&b);
			
			v.push_back(make_pair(make_pair(a,b),k));
			k++;
		}
		sort(v.begin(),v.end());
		long long l=v[n-1].first.first;
		long long ans=v[n-1].second;
		int count=0;
		for(int i=0;i<n-1;i++)	{
			if(v[i].first.second<l)count++;
		}
		if(count==n-1)
			 printf("%lld\n",ans);
		else
			printf("-1\n");
	}
	return 0;
}
