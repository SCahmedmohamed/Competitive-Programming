// By Ahmed Mohamed Ibrahim . Feb/08/2022 18:53
#include<bits/stdc++.h>
#define ll long long
#define test_cases int test;cin >> test;while(test--)
#define el endl
#define ft float
#define ld long double
#define _3m_Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
 
            _3m_Scorpion
    int n, a, x=1000000001, xx;
	cin>>n;
	n++;
	for(int nn=1; nn<n; nn++)
	{
		cin>>a;
		if(a<x)
			x=a, xx=nn;
		else if(a==x)
			xx=0;
	}
	if(xx)
		cout << xx << el;
	else
		cout << "Still Rozdil" << el;
        return 0;
}
