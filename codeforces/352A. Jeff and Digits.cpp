// By Ahmed Mohamed Ibrahim . Feb/09/2022 01:15
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Scorpion
    int i,n,n1=0,n2=0,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>k;
		if(k==0) n1++;
		else n2++;
	}
	if(n1>0){
		k=(n2/9)*9;
		for(i=0;i<k;i++)
            cout<<5;
		
		if(k>0){
		
            for(i=0;i<n1;i++)
                cout<<0; 
		}
		else cout << 0;
	}
	else cout << -1 << el;
    return 0;
}
