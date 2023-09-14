// author : Ahmed Mohamed Ibrahim
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second

#define Ahmed(itsSCORPION) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e6 + 5, inf = 1e9 + 7, NEG = -1e9 + 7;
ll a , b , c , n , ans, arr[N], vis[N] ,cnt1 , cnt2;
// how many ways to get 10 from 1 
// by (x+1,x+2,x3)
string s;
char ar[10][10];
int rec(int x , int n){
    if(x == n) {
        return 1;

    }
    if(x > n) return 0;
    int a = rec(x+1,n);
    int b = rec(x+2,n);
    int c = rec(x+3,n);
    return a + b + c;
}

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> ar[i][j];
}

int main (){                                       Ahmed(itsSCORPION)
    //TC{
    solve();
//}
    return 0;
}
