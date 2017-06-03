#include<bits/stdc++.h>
#define MAX 501
int cache[101][MAX];
using namespace std;
int dp(int index,int budjet,int bud[],int fun[]){
	if(index<0)
		return 0;
	if(cache[index][budjet]!=-1)
		return cache[index][budjet];
	int t=0;
	if(bud[index]<=budjet)
	{	t=dp(index-1,budjet-bud[index],bud,fun)+fun[index];
	}
	return cache[index][budjet]=max(t,(dp(index-1,budjet,bud,fun)));	

}
int main(){
	int budjet,n;
	while(1){
	scanf("%d %d",&budjet,&n);
	if(budjet==0&&n==0)break;
	memset(cache,-1,sizeof(cache));
	int bud[n],fun[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&bud[i],&fun[i]);
	}
	int y=dp(n-1,budjet,bud,fun);
	int m=0, i,j;
	for(j=0;j<=budjet;j++)if(dp(n-1,j,bud,fun)==y){m=j;break;}
	printf("%d %d\n",m,y);
	}
return 0;
}
