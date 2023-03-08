// By Ahmed Mohamed Ibrahim . Mar/06/2023 21:55	
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
    int n;
    cin >> n;
    int u = n / 10 , v = n - u*10;
    if(u == 0 || v == 0){
        cout << "YES" << endl;
        return 0;
    }
    if(u % v == 0 || v % u == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
