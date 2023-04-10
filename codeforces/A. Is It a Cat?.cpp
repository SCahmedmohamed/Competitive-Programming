// By Ahmed Mohamed Ibrahim . Apr/10/2023 20:42
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
char ch[36];
string s;
bool flag;
int vis[N];

void init(){
    for(int i = 0; i < 4; i++){
        vis[i] = 0;
    }
    flag = true;
}

int main (){                                       One_Piece_3mk
    TC{
    flag = true;
    cin >> n >> s;
    string sm , se , so , sw;
    for(int i = 0; i < n; i++){
        if(s[i] == 'M' || s[i] == 'm') sm.push_back(s[i]);
        else if(s[i] == 'E' || s[i] == 'e') se.push_back(s[i]);
        else if(s[i] == 'o' || s[i] == 'O') so.push_back(s[i]);
        else if(s[i] == 'W' || s[i] == 'w') sw.push_back(s[i]);
        else{
            flag = false;
            break;
        }
    }
    if(!flag || sm.empty() || se.empty() || so.empty() || sw.empty()) cout << "NO" << el;
    else{
        string sa = sm + se + so + sw;

        if(sa == s){
            cout << "YES" << el;
        } else cout << "NO" << el;
    }
}
    return 0;
}
