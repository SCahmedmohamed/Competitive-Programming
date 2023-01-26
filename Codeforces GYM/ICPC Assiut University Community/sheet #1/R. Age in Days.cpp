// By Ahmed Mohamed Ibrahim .Jan/26/2023 23:49	
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
    int x;
    cin >> x;
        if(x >= 365){
            year = x / 365;
            x %= 365;
        }
        if(x >= 30){
             month = x / 30;
            x %= 30;
        }
         day = x;
    cout << year << " years" << endl << month << " months" << endl << day << " days" << endl;
    return 0;
}

