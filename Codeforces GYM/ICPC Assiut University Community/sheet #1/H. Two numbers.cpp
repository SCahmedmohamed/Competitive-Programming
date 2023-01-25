// By Ahmed Mohamed Ibrahim . Jan/25/2023 20:52
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
    double x , y;
    cin >> x >> y;
    cout << "floor "<< x << " / " << y << " = " << floor(x/y) << endl;
    cout << "ceil "<< x << " / " << y << " = " << ceil(x/y) << endl;
    cout << "round "<< x << " / " << y << " = " << round(x/y) << endl;
    return 0;
}

