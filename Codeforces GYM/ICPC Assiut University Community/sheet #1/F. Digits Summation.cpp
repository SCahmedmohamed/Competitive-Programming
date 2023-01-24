// By Ahmed Mohamed Ibrahim .Jan/24/2023 17:26	
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi = 3.141592653;
int main (){                                Scorpion
    ll x , y;
    cin >> x >> y;
    ll xs = x %10;
    ll ys = y %10;
    cout << xs + ys << endl;
    return 0;
}

