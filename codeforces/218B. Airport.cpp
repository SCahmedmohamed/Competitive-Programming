// By Ahmed Mohamed Ibrahim . Feb/15/2022 19:14
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
    int n,n1,m;cin>>n>>m;n1=n;
	int a[m],b[m];for(int i=0;i<m;i++)cin>>a[i];
	sort(a,a+m);
	for(int i=0;i<m;i++)b[i]=a[i];
	int mini=0,maxi=0,i=0,j=m-1;
	while(n--)
	{
		mini+=a[i];
		if(--a[i]==0)i++;
		maxi+=b[j];
		b[j]--;
		sort(b,b+m);
	}
	cout<<maxi<<" "<<mini;
}
