// By Ahmed Mohamed Ibrahim . Jun/09/2023 22:56	
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

int  mn , mx , x , y , z, a , b , c , d, k , ans1 , ans2 , ans3 , cnt , arr[N] , arr2[N],arr3[N] , n , m;
char ch , ch1[200];
string s , s1 , s2 ,s3 , s4;
bool flag , fg1;
int vis[N];
vector<pair<int,int>> v;

void file(){
    //freopen("collectingofficer.in", "r", stdin);
    //   freopen("output.txt", "w", stdout);
}

void solve(){
    set<char>st;
    cin >> s;
    for(int i = 0; i < s.size() / 2; i++){
        st.insert(s[i]);
    }
    if(st.size()>1) cout << "YES" << el;
    else cout << "NO" << el;
}

int main (){                                       One_Piece_3mk
     TC{
    solve();
}
    return 0;
}
