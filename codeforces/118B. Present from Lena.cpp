// By Ahmed Mohamed Ibrahim . Feb/15/2022 19:11
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
    int n,i,j,k;
	cin >> n;
	for(j=0; j<=2*n;j++) {
		i=n-abs(j-n);
		k=0;
		while(k<n-i) {
			cout<<"  "; 
			k++;
		}
		k=i;
		while(k>-i) {
			cout << i-abs(k) <<" ";
			k--; }
		cout << 0 << endl;
		}
}
