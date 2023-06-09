// By Ahmed Mohamed Ibrahim .May/16/2023 15:50	
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
char ch[10][10];
string s , s1 , s2 ,s3 , s4;
bool flag , fg1;
int vis[N];

void solve(){
    s1 = "314159265358979323846264338327";
    cnt = 0;
    cin >> s2;
    for(int i = 0 ; i < s1.size(); i ++){
        if(s1[i] != s2[i]){
            cout << cnt << el;
            return;
        } else cnt++;
    }
    cout << cnt << el;
    return;
}

int main (){                                       One_Piece_3mk
    TC{
    solve();
    }
    return 0;
}
