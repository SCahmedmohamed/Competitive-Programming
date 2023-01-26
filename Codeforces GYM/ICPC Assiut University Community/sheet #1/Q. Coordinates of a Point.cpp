// By Ahmed Mohamed Ibrahim .Jan/26/2023 21:00	
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
    if(x > 0 && y > 0) cout << "Q1" << endl;
    else if(x < 0 && y < 0) cout << "Q3" << endl;
    else if(x == 0 && y == 0) cout << "Origem" << endl;
    else if(x > 0 && y < 0) cout << "Q4" << endl;
    else if(x < 0 && y > 0) cout << "Q2" << endl;
    else if(x == 0 && y != 0) cout << "Eixo Y" << endl;
    else cout << "Eixo X" << endl;
    return 0;
}

