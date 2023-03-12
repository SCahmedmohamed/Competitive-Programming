// By Ahmed Mohamed Ibrahim .Mar/12/2023 23:35	
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

void Sum(int x){
    arr = 0;
    int m = x;
    while(x > 0){
        arr += x % 10;
        x /= 10;
    }
    if(arr >= u && arr <= v){
        ans += m;
    }
}

int main (){                                One_Piece_3mk
    cin >> n >> u >> v;
    for(int i = 1; i <= n; i++){
        Sum(i);
    }
    cout << ans << endl;
    return 0;
}
