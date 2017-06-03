#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
stack<char> q;
cin>>s;
int l=s.length();
for(int i=0;i<l;i++)
{

if((s[i]!='(')&&(s[i]!=')')&&(s[i]!='+')&&(s[i]!='-')&&(s[i]!='*')&&(s[i]!='/')&&(s[i]!='^'))
{
cout<<s[i];
}

if((s[i]=='+')||(s[i]=='-')||(s[i]=='*')||(s[i]=='/')||(s[i]=='^'))
q.push(s[i]);

if(s[i]==')')
{
char ch=q.top();
cout<<ch;
q.pop();
}

}
cout<<"\n";
}
return 0;
}
