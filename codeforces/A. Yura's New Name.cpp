// By Ahmed Mohamed Ibrahim .Apr/25/2023 03:18	
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

int  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr1[N] , arr2[N] , n , m;
char ch;
string s;
bool flag , fg1;
int vis[N];

int main (){                                       One_Piece_3mk
    TC{
        cin >> s;
        ans = 0 , cnt = 0;
        if(s[0] == '_') ans++;
        for(int i = 1; i <= s.size(); i++){
            if(s[i] == '_' && s[i-1] == '_') ans++;
        }
        for(int i = 0; i < s.size(); i ++) if(s[i] == '^') cnt++;
        if(s[s.size()-1] == '_') ans++;
        if(cnt == 1 && !ans) ans++;
        cout << ans << el;
}
    return 0;
}
