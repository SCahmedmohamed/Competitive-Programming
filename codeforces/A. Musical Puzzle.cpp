// By Ahmed Mohamed Ibrahim .May/19/2023 18:01	
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
const double Pi =  3.14159265359;

int  mn , mx , x , y , z, a , b , c , d, ans1 , ans2 , ans3 , cnt , arr[N] , arr2[N] , n , m;
char ch[26];
string s , s1 , s2 ,s3 , s4;
bool flag , fg1;
int vis[N];
set <pair<char,char>> ss;

void solve(){
    ss.clear();
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        char o1 = s[i];
        char o2 = s[i+1];
        ss.insert({o1,o2});
    }
    cout << ss.size() - 1 << el;
}

int main (){                                       One_Piece_3mk
    TC{
    solve();
    }
    return 0;
}
