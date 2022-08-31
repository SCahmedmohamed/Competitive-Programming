// By Ahmed Mohamed Scorpion . Aug/30/2022 18:57
#include <bits/stdc++.h>
#define ll long long
#define el endl
#define ff first
#define ss second
#define This_Code_By_Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
const int N = 1e5 +5 , mod = 1e9 + 7, L = 1e3 + 3;
void file(){
    freopen("input.in","r",stdin);
    freopen("output.in","w",stdout);
}

int t , n;
string a , b;
void solve(){
    cin >> n >> a >> b;
    if(a.size() != b.size()){
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i] || a[i] == 'G' && b[i] == 'B' || a[i] == 'B' && b[i] == 'G')
            continue;
        else{
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){                                      This_Code_By_Scorpion
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
