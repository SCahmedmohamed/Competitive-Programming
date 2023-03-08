// By Ahmed Mohamed Ibrahim . Mar/08/2023 23:52	
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi =  3.141592653;


int main (){                                One_Piece_3mk
    long long n , k , a;
    cin >> n >> k >> a;
    long double u = (n*k)/a;
    int v = u;
    if((n*k)%a != 0){
        cout << "double" << endl;
        goto R;
    }
    if(u > INT_MAX) cout << "long long" << endl;
    else cout << "int" << endl;
R:  return 0;
}
