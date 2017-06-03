#include<bits/stdc++.h>
using namespace std;
int power(int q,int w)
{
if(w==0)return 1;
if(w==1)return q;
int t=power(q%10,w/2);
t=t%10;
return t*t*power(q%10,w%2);
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
long long a,b;
scanf("%lld%lld",&a,&b);
long long q,r,d;
if(a%10==1)d=1;
else if(a%10==2)d=5;
else if(a%10==3)d=5;
else if(a%10==4)d=3;
else if(a%10==5)d=2;
else if(a%10==6)d=2;
else if(a%10==7)d=5;
else if(a%10==8)d=5;
else if(a%10==9)d=3;

q=b/d;r=b%d;

int ans;
ans=power(a%10,q+r);
ans=ans%10;
printf("%d\n",ans);
}
return 0;
}

