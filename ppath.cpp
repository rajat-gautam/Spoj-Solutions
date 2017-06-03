#include<bits/stdc++.h>
using namespace std;
bool prime[10001];
void sieve() {
	for(int i=2;i<=100;i++) {
		if(!prime[i]) {
			for(int k=i*i;k<=10000;k=k+i) {			
					prime[k]=true;
			}
		}
	}
}
void changetoarray(int a[],int u) {
		int k=3;
		while(u!=0) {
			a[k]=u%10;
			u=u/10;
			k--;
		}
}
int changetonum(int a[]){
	int temp=0,l=3;
	for(int i=0;i<=3;i++) {
		temp=temp+a[i]*pow(10,l);
		l--;
	}
return temp;
}
int main() {
	int t;
	scanf("%d",&t);
	sieve();
	int a,b;
	int arr[4];
	while(t--) {
		scanf("%d %d",&a,&b);
		queue<int> q;
		q.push(a);	
		int dist[10001];
		memset(dist,-1,sizeof(dist));
		dist[a]=0;
		while(!q.empty()) {
			int u=q.front();
			q.pop();
			for(int k=3;k>=0;k--) {
				changetoarray(arr,u);
				//printf("%d %d" ,arr[0],arr[3]);
				for(int i=0;i<=9;i++){
					arr[k]=i;
					int temp=changetonum(arr);
			//		printf(" %d ",temp);
																				    if((dist[temp]==-1)&&(temp>=1000)&&(prime[temp]==false)) {
						dist[temp]=dist[u]+1;
						q.push(temp);
					}
			//		printf("\n");
				}
			//	printf("Aba\n");
			}
		}
		
		dist[b]==-1 ? printf("Impossible\n") : printf("%d\n",dist[b]);		
	} 
	
	return 0;
}
