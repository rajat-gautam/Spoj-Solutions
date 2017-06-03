#include<bits/stdc++.h>
using namespace std;
map<int,long long> results;
long long ad(long long n)
{
if(n==0)return 0;
if(results[n]!=0)return results[n];
else
return results[n]=max(n,ad(n/2)+ad(n/3)+ad(n/4));
}
int main()
{
long long n;
while(scanf("%lld",&n)==1)
printf("%lld\n",ad(n));
return 0;
}
