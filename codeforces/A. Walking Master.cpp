// By Ahmed Mohamed Ibrahim .Mar/20/2023 00:07	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9 + 7;
const double Pi =  3.141592653;

ll mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N];
string s;

void bigger(int x , int y){
    if(x > y) mx = x , mn = y;
    else mx = y , mn = x;
}


int main (){                                One_Piece_3mk
    TC{
    cin >> a >> b >> c >> d;
    if(b > d){
        cout << "-1" << el;
        continue;
    }
    int u = d - b;
    a += u;
    b += u;
    if(a < c) {
        cout << -1 << el;
        continue;
    }
    if(a == c){
        cout << u << el;
        continue;
    }
    int v = c - a;
    u += abs(v);
    cout << u << el;
}
    return 0;
}
