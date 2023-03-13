// By Ahmed Mohamed Ibrahim .Mar/13/2023 21:35	
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

ll t, n , a[N] , mx , mn, ans , x , y, z = -1;
string s;

void bigger(int x , int y){
    if(x > y) mx = x , mn = y;
    else mx = y , mn = x;
}

int main (){                                One_Piece_3mk
    cin >> n; // 4
    y = n / 2; // 3
    int u = n;
    for(int i = 0; i < n; i++){
        u--;
        for(int j = u; j > 0; j--) cout << " ";
        z+=2;
        for(int j = 0; j < z; j++) cout << "*";
        cout << endl;
    }
    u = -1 , z = n*2+1;
    for(int i = 0 ; i < n; i++){
        u++;
        for(int j = u; j > 0; j--) cout << " ";
        z -=2;
        for(int j = 0; j < z; j++) cout << "*";
        cout << endl;
    }
    return 0;
}
