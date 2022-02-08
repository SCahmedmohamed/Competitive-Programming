// By Ahmed Mohamed Ibrahim . Feb/09/2022 01:26
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Scorpion
    int n,m,max=0;
	cin >> n;
	vector<int> v(n);
	for(int &a:v) cin >> a;
	cin >> m;
	vector<int> v1(m);
	for(int &a:v1) cin >> a;
 
	map<int,int> mp;
	for(int a:v)
		for(int b:v1)
			if(b%a==0 && (b/a)>=max){
				max=(b/a);
				mp[max]++;
			}
	cout << mp[max] << endl;
    return 0;
}
