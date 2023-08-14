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
#define loop(n) for(long long i=0;i<n;i++)

const int N = 2e5 + 5, inf = 1e9 + 7, NEG = -1e9 + 7;
const double Pi = 3.14159265359;
ll pref[N];
ll arr[N], n;

void solve() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i <= n; i++){
        pref[i] = pref[i-1] + arr[i-1];
    }
    for(int i = 0; i <= n; i++) cout << pref[i] << " ";
}

int main (){                                       One_Piece_3mk
   // TC{
        solve();
  //  }
    return 0;
}
