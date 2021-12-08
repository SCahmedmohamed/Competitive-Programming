// By Ahmed Mohamed Ibrahim . Dec/08/2021 12:44
#include<bits/stdc++.h>
#define ll long long
#define el endl
#define ft float
#define ld long double
#define _3m_Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
        _3m_Scorpion
    int n , a[100005], t;
    cin>>n;
	while(n--)
		cin>>t,a[t]++;
	cout << a[4]+a[3]+(a[2]*2+max(a[1]-a[3],0)+3)/4;
}
