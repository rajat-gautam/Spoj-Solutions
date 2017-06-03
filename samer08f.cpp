#include<bits/stdc++.h>

using namespace std;

int main()

{

int n;

while(1)

{

scanf("%d",&n);

if(n==0)break;

int ans; 

ans=(n)*(n+1)*(2*n+1);
ans=ans/6;
printf("%d\n",ans);

}

return 0;

}
