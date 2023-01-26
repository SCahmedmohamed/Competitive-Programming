// By Ahmed Mohamed Ibrahim .Jan/26/2023 16:19	
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
    int a , b;
    string s;
    cin >> a >> s[0] >> b;
    if(s[0] == '+') cout << a + b << endl;
    if(s[0] == '-') cout << a - b << endl;
    if(s[0] == '*') cout << a * b << endl;
    if(s[0] == '/') cout << a / b << endl;
    return 0;
}

