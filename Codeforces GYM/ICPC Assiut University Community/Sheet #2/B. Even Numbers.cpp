// By Ahmed Mohamed Ibrahim .Mar/09/2023 19:52	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi =  3.141592653;

vector<int>v;

int main (){                                One_Piece_3mk
    int n;
    cin >> n;
    for(int i = 2; i <= n; i+=2) v.push_back(i);
    if(!v.empty()){
        for(auto o : v) cout << o << endl;
    } else cout << -1;
R:  return 0;
}
