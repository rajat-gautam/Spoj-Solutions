#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
int k,nm,dm;
int j=1,l=2;
int n2=n;
int n3=n;
while(n)
{
for(int i=1;i<=j;i++)
{
if(n==0)break;
dm=i;n--;
}
j=j+2;
for(int p=l;p>=1;p--)
{
if(n==0)break;
dm=p;n--;
}
l=l+2;
}
int u=1,v=2;
while(n2)
{
for(int i=u;i>=1;i--)
{
if(n2==0)break;
nm=i;n2--;
}
u=u+2;
for(int j=1;j<=v;j++)
{
if(n2==0)break;
nm=j;n2--;
}
v=v+2;
}
printf("TERM %d IS %d/%d\n",n3,nm,dm);
}
return 0;
}
