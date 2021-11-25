// By Ahmed Mohamed Ibrahim . Oct/27/2021 19:09
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,pos[200005],c,j,i,p=1e9,co,sum,f,b;
	string s,t;
	cin>>s>>t;
	for(i=0;i<s.size();i++)
	{
		cin>>c;
		pos[--c]=i;
	}
	f=0,b=s.size();
	while(f<=b)
	{
		p=(f+b)/2;
		for(i=0,j=0;i<s.size();i++)
			if(s[i]==t[j]&&pos[i]>=p)
			j++;
		j==t.size()?f=p+1:b=p-1;
	}
	cout<<f-1;
}
