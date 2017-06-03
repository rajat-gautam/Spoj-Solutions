#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
while(1)
{
scanf("%d",&n);
if(n==-1)return 0;
int sum=0;
vector<int> ar(n);
for(int i=0;i<n;i++)scanf("%d",&ar[i]);
for(int i=0;i<n;i++)sum=sum+ar[i];
int q=sum/n;
int r=sum%n;
int ans=0;
if(r!=0)ans=-1;
else
{
for(int i=0;i<n;i++)
{
if(ar[i]>q)ans=ans+(ar[i]-q);
}
}
printf("%d\n",ans);
}
return 0;
}



