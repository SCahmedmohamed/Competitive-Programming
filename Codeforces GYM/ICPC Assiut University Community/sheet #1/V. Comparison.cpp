// By Ahmed Mohamed Ibrahim .Jan/27/2023 00:33	
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
    int x , y;
    string s;
    cin >> x >> s >> y;
    if(x > y && s == ">") cout << "Right" << endl;
    else if(x < y && s == "<") cout << "Right" << endl;
    else if(x == y && s == "=") cout << "Right" << endl;
    else cout << "Wrong" << endl;
}

