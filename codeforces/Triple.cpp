// By Ahmed Mohamed Ibrahim . Apr/22/2022 12:48
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , mod = 1e9 + 7;

int main(){
    Scorpion
    int t;
    cin >> t;
    while(t--){
        int n , ans = -1;
        map<int,int> mp;
        cin >> n;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            mp[a]++;
            if(mp[a]== 3)
                ans = a;
        }
        cout << ans << el;
    }
    return 0;
}
