// By Ahmed Mohamed Ibrahim . Jan/25/2023 20:59	
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
    int x , y , z;
    cin >> x >> y >> z;
    int u = min(x,min(y,z));
    int v = max(x,max(y,z));
    cout << u << " " << v;
    return 0;
}

