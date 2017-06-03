#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
long long a,c;
char b;
scanf(" %lld %c %lld",&a,&b,&c);
if(b=='+')
a=a+c;
if(b=='-')
a=a-c;
if(b=='*')
a=a*c;
if(b=='/')
a=a/c;

while(b!='=')
{


scanf(" %c",&b);
if(b=='=')break;
else
{

scanf("%lld",&c);
if(b=='+')
a=a+c;
if(b=='-')
a=a-c;
if(b=='*')
a=a*c;
if(b=='/')
a=a/c;
}
}
printf("%lld\n",a);
}
return 0;
}

