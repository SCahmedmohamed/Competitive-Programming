// By Ahmed Mohamed Ibrahim .Jan/25/2023 21:13	
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
    char c;
    cin >> c;
    if(int(c) > 47 && int(c) <65) cout << "IS DIGIT" << endl;
    else{
        cout << "ALPHA" << endl;
        if(isupper(c)) cout << "IS CAPITAL" << endl;
        else cout << "IS SMALL" << endl;
    }
    return 0;
}

