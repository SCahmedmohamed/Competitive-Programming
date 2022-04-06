// By Ahmed Mohamed Ibrahim . Feb/25/2022 18:35
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Scorpion
    int t , s;
    string n;
    cin>>t;
	while(t--){
		s=0;
		cin>>n;
		for(int i=0;i<n.size();i++){
			for(int j=i+1;j<n.size();j++)
				if(((n[i]-'0')*10+(n[j]-'0'))%25==0) s=n.size()-i-2;
		}
		cout<<s<<endl;
	}
    return 0;
}
