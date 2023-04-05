// By Ahmed Mohamed Ibrahim . Apr/06/2023 00:53	
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

ll  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N] , n , m;
char ch[30];
string s;
bool flag;

int lower(int a , int b){
    if(a < b) return a;
    return b;
}

int main () {                                       One_Piece_3mk
    cin >> a >> b;
    lower(a,b) % 2 == 0 ? cout << "Malvika" : cout << "Akshat";
    return 0;
}
