// By Ahmed Mohamed Ibrahim . Feb/08/2022 18:42
#include<bits/stdc++.h>
#define ll long long
#define test_cases int test;cin >> test;while(test--)
#define el endl
#define ft float
#define ld long double
#define _3m_Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n , i , k , a[10];
int main(){

            _3m_Scorpion
    cin>>n;
	for(i=1;i<=7;i++)
		cin>>a[i];
	i=0;
	while(n>k){
		if(i==8)
			i=1;
		k+=a[i];
		i++;}
	cout<<i-1;
return 0;
}
