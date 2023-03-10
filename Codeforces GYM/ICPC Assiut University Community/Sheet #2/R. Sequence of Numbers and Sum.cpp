// By Ahmed Mohamed Ibrahim .Mar/10/2023 16:52	
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

ll t, n , a[N] , mx , mn, ans , x , y, z;
string s;

void bigger(int x , int y){
    if(x > y) mx = x , mn = y;
    else mx = y , mn = x;
}

int main (){                                One_Piece_3mk
    while(cin >> x >> y){
        if(x > 0&&y > 0){
            ans = 0;
            bigger(x,y);
            for(int i = mn;  i <= mx; i++){
                cout << i << " ";
                ans += i;
            }
            cout << "sum =" << ans << endl;

        } else return 0;
    }
R:  return 0;
}
