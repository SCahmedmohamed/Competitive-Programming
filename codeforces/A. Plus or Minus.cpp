// By Ahmed Mohamed Ibrahim .Mar/22/2023 18:35	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5 , inf = 1e9 + 7 , NEG = -1e9 + 7;
const double Pi =  3.141592653;

ll  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N];
string s;
float n;
bool flag;
int vis[N];

void bigger(int x , int y){
    if(x > y) mx = x , mn = y;
    else mx = y , mn = x;
}

void init(){
    for(int i = 0; i < n; i ++){
        vis[i] = 0;
    }
}

int main () {                                       One_Piece_3mk
    TC{
    cin >> a >> b >> c;
    if(a - b == c) cout << "-" << el;
    else cout << "+" << el;
}
        return 0;
}
