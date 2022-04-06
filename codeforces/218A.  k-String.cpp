// By Ahmed Mohamed Ibrahim . Feb/15/2022 19:10
#include <bits/stdc++.h>
using namespace std;
#define ts int test_cases;cin >> test_cases;while(test_cases--)
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    Scorpion
    int k;
	cin>>k;
	string a,b,c;
	cin>>a;
	sort(a.begin(),a.end());
	for (int i=0; i<a.length(); i+=k) b+=a[i];
	for (int i=0; i<k; i++) c+=b;
	b=c;
	sort(b.begin(),b.end());
	if (b==a) cout<<c;
	else cout<<-1;
    return 0;
}
