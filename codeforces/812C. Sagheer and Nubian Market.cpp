// By Ahmed Mohamed Ibrahim . Feb/18/2022 20:34
#include <bits/stdc++.h>
using namespace std;
#define ts int test_cases;cin >> test_cases;while(test_cases--)
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int a,b,c,d[1000005],ans = 0;
int main(){
    Scorpion
    lli n,s,i,p,q,sum;
    cin>>n>>s;
	lli a[n],b[n];
	for(i=0;i<n;i++){
        cin>>a[i];
	}

	lli l = 0 , r = n , m;
	while(l<=r){
		m = (l + r)/2;
		sum = 0;
		for(i=0;i<n;i++) b[i] = a[i]+(i+1)*m;
		sort(b,b+n);
		for(i=0;i<m;i++) sum += b[i];

		if(sum<=s){
			p = m;
			q = sum;
			l = m+1;
		}else r = m-1;
	}
	cout<<p<<" "<<q;
}
