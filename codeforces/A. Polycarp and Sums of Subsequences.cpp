// By Ahmed Mohamed Ibrahim . Dec/14/2021 19:08
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    Scorpion
    int n, a1 , a2 ,a3 ,a4 ,a5, a6, a7;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7;
        cout << (a7-a6) << " " << a2 << " " << (a6-a2) << el;
    }
return 0;
}
