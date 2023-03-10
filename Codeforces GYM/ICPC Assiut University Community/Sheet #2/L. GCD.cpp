// By Ahmed Mohamed Ibrahim . Mar/10/2023 16:20	
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

ll t, n , a[N] , mx , mn;
int x , y , z;

void bigger(int u , int v){
    if(u > v) mx = u , mn = v;
    else mx = v , mn = u;
}

int main (){                                One_Piece_3mk
    cin >> x >> y;
    bigger(x,y);
    for(int i = mx; i >= 1; i--){
        if(x % i == 0 && y % i == 0){
            cout << i << endl;
            return 0;
        }
    }
R:  return 0;
}
