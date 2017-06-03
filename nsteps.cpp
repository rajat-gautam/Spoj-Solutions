#include<bits/stdc++.h>
using namespace std;
int solution(int a,int b)
{
if(a==b)
{
if(a%2==0)return a+b;
else return a+b-1;
}
if(a==b+2)
{
if(b%2==0)return a+b;
else return a+b-1;
}
else return -1;
}
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int a,b;
scanf("%d%d",&a,&b);

int n=solution(a,b);
if(n!=-1)
printf("%d\n",n);
else
printf("No Number\n");
}
return 0;
}

