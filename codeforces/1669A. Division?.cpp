// By Ahmed Mohamed Ibrahim . Apr/21/2022 23:11
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n;
int main(){
    Scorpion
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x >= 1900) cout << "Division 1" << el;
        else if(x >= 1600 && x <= 1899) cout << "Division 2" << el;
        else if(x >= 1400 && x <= 1599) cout << "Division 3" << el;
        else cout << "Division 4" << el;
    }

    return 0;
}
