// By Ahmed Mohamed Ibrahim .Feb/11/2023 17:51
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi = 3.141592653;

int main (){                                Scorpion
    int a , b , c;
    string s , e;
    cin >> a >> s >> b >> e >> c;
    if(s == "+") {
        if (a + b == c) cout << "Yes" << endl;
        else{
            cout << a + b << endl;
        }
    }
    else if(s == "-"){
        if(a - b == c) cout << "Yes" << endl;
        else cout << a - b << endl;
    }
    else if(s == "*"){
        if(a * b == c) cout << "Yes" << endl;
        else cout << a*b << endl;
    }
return 0;
}

