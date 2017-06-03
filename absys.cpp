#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
while(n--)
{
char s1[1000],s2[1000],s3[1000];
scanf("%s",s1);
getchar();
getchar();
scanf("%s",s2);
getchar();
getchar();
scanf("%s",s3);
int a=0,b=0,c=0,l1,l2,l3;
if(strstr(s1,"machula"))
{
l2=strlen(s2);
for(int i=0;i<l2;i++)b=10*b+(s2[i]-'0');
l3=strlen(s3);
for(int i=0;i<l3;i++)c=10*c+(s3[i]-'0');
printf("%d + %d = %d\n",c-b,b,c);
}
if(strstr(s2,"machula"))
{
l1=strlen(s1);
for(int i=0;i<l1;i++)a=10*a+(s1[i]-'0');
l3=strlen(s3);
for(int i=0;i<l3;i++)c=10*c+(s3[i]-'0');
printf("%d + %d = %d\n",a,c-a,c);
}
if(strstr(s3,"machula"))
{
l2=strlen(s2);
for(int i=0;i<l2;i++)b=10*b+(s2[i]-'0');
l1=strlen(s1);
for(int i=0;i<l1;i++)a=10*a+(s1[i]-'0');
printf("%d + %d = %d\n",a,b,b+a);
}
}
return 0;
}
