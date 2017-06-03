#include<bits/stdc++.h>
using namespace std;
int main()
{
float n;
while(1)
{
scanf("%f",&n);
if(n==0.00)return 0;
int count=0;
float i=2;
while(n>0)
{
n=n-(1/i);
i++;
count++;
}
printf("%d card(s)\n",count);
}
return 0;
}
