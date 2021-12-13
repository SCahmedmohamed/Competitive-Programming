// By Ahmed Mohamed Ibrahim . Dec/13/2021 20:27
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    Scorpion
    int n , x , y, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> a >> b;
        if((y-x)%(a+b) == 0){
            cout << (y-x)/(a+b) << el;
        } else { cout << -1 << el; }

    }
return 0;
}
