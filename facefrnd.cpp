#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	set<int> s;
	int a,m,b;
	int y=n;
	while(n--){
		scanf("%d %d",&a,&m);
		s.insert(a);
		while(m--) {
			scanf("%d",&b);
			s.insert(b);
		}
	}
//	set<int>::iterator itr=s.begin();
//	while(itr!=s.end())
//	{printf("%d ",*itr);itr++;}
	int k=s.size();
//	printf("%d",k);
	printf("%d",k-y);
}
