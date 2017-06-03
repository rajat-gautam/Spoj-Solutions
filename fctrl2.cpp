#include<iostream>
#include<stdio.h>
#define MAX 500
using namespace std;
int multiply(int x,int res[],int res_size)
{
int carry=0,prod;
for(int i=0;i<res_size;i++)
{
prod=res[i]*x+carry;
res[i]=prod%10;
carry=prod/10;
}
while(carry)
{
res[res_size]=carry%10;
carry=carry/10;
res_size++;
}
return res_size;
}
void factorial(int n)
{
int res[MAX];
res[0]=1;
int res_size=1;
for(int i=2;i<=n;i++)
{
res_size=multiply(i,res,res_size);
}
for(int i=res_size-1;i>=0;i--)
printf("%d",res[i]);
}
int main()
{
int w;
scanf("%d",&w);
while(w--)
{
int l;
scanf("%d",&l);
factorial(l);
printf("\n");
}
return 0;
}
