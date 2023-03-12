// By Ahmed Mohamed Ibrahim .Mar/12/2023 23:39	
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

ll t, n , a[N] , mx , mn, arr, ans , x , y, z , u , v;
string s;

void bigger(int x , int y){
    if(x > y) mx = x , mn = y;
    else mx = y , mn = x;
}

int main (){                                One_Piece_3mk
    cin >> n;
    for(int i = 1; i <= n; i++){
        v++;
        cout << v << " ";
        v++;
        cout << v << " ";
        v++;
        cout << v << " ";
        v++;
        cout << "PUM" << endl;
    }
    return 0;
}
