#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,co=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=i;j<=n;j++)
{
if(i*j<=n)co++;
else break;

}

}
printf("%d",co);
return 0;
}
