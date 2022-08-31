// By Ahmed Mohamed Scorpion . Aug/30/2022 18:48
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
string s , x;

int main(){                                      This_Code_By_Scorpion
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        sort(s.begin(),s.end());
        string ans = "Timur";
        sort(ans.begin(),ans.end());
        if(s == ans) cout <<"YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
