// By Ahmed Mohamed Ibrahim . Oct/09/2021 01:47	
#include<bits/stdc++.h>
using namespace std;
int T;
string N,S[60];
#define ll long long
main()
{
	for(int i=0;i<60;i++)S[i]=to_string(1LL<<i);
	cin>>T;
	for(;T--;)
	{
		cin>>N;
		int ans=1e9;
		for(int i=0;i<60;i++)
		{
			int sz=0;
			for(char c:N)if(sz<S[i].size()&&S[i][sz]==c)sz++;
			int now=N.size()-sz+S[i].size()-sz;
			if(ans>now)ans=now;
		}
		cout<<ans<<endl;
	}
}
