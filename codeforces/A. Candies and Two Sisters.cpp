// author : Ahmed Mohamed Ibrahim
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

int  mn , mx , x , y , z, a , b , c , d, k , ans , ans2 , ans3 , cnt , arr[N] , arr1[N],arr2[N] , n , m , vz[N];
char ch , ch1[200];
string s , s1 , s2 ,s3 , s4;
bool flag , ok;
int vis[N];
set<int>st;
vector<int>v,v1;
void solve() {
    cin >> n;
    if(n % 2 == 0) cout << (n / 2) - 1 << endl;
    else cout << n / 2 << endl;
}
int main (){                                       One_Piece_3mk
     TC{
    solve();
}
    return 0;
}
