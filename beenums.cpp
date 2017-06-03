#include<bits/stdc++.h>
using namespace std;
int main()
{
while(1)
{
long long n;
scanf("%lld",&n);
if(n==-1)break;

if(n==1)
{
printf("Y\n");
continue;
}
n=n-1;
long long k=1;
while(n>0)
{
n=n-k*6;
k++;
}
if(n==0)printf("Y\n");
else printf("N\n");
}
return 0;
}
