// By Ahmed Mohamed Ibrahim .Jan/27/2023 00:28	
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
int year , day , month;
int main (){                                Scorpion
    double x;
    cin >> x;
    int y = x;
    if(x - y == 0) cout << "int " << y;
    else cout << "float " << y << " " << x - y;
    return 0;

}

