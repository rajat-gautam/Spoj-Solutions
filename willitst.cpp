#include<bits/stdc++.h>
using namespace std;
int main()
{
unsigned long long n;
scanf("%lld",&n);
if(n==0)printf("TAK");
if(!(n&(n-1)))printf("TAK");
else printf("NIE");
return 0;
}
