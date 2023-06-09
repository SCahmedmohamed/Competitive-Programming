// By Ahmed Mohamed Ibrahim .May/09/2023 19:11	
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

int  mn , mx , x , y , z, a , b , c , d, ans1 , ans2 , ans3 , cnt , arr[N] , arr2[N] , n , m;
char ch[10][10];
string s , s1 , s2 ,s3 , s4;
bool flag , fg1;
int vis[N];

void solve(){
    cin >> s1 >> s2;
    if(s1 == s2){
        cout << "-1" << el;
        return;
    }
    cout << max(s1.size(),s2.size());
}

int main (){                                       One_Piece_3mk
    //TC{
    solve();
    //}
    return 0;
}
