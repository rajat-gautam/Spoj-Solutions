#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	int ar[n],br[n],cr[n],dr[n];
	for(int i=0;i<n;i++) {
		scanf("%d %d %d %d",&ar[i],&br[i],&cr[i],&dr[i]);
	}
	
	unordered_map <int, int> mymap;
	mymap.reserve(16000000);
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			mymap[cr[i]+dr[j]]++;
		}
	}
	int count=0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			int temp=ar[i]+br[j];
			if(mymap.find(-1*temp)!=mymap.end()) {
				count=count+mymap[-1*temp];
			}
		}
	}	
	printf("%d",count);
	return 0;
}
