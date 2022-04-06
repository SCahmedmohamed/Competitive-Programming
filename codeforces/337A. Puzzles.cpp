// By Ahmed Mohamed Ibrahim . Feb/15/2022 19:13
#include <bits/stdc++.h>
using namespace std;
#define ts int test_cases;cin >> test_cases;while(test_cases--)
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,m,d=999,k;

int main(){
    Scorpion
    cin>>n>>m;
	int a[k=m];
	while(k--){
        cin>>a[k];
	}
	sort(a,a+m);
	n--;
	m-=n;
	while(m--){
        d=min(d,a[m+n]-a[m]);
    }
	cout<<d;
}
