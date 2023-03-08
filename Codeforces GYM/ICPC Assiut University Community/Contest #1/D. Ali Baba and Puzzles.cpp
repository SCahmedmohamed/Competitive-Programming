// By Ahmed Mohamed Ibrahim . Mar/09/2023 00:12	
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi =  3.141592653;
bool flag;
long long x , y , z , tar;
int main (){                                One_Piece_3mk
    cin >> x >> y >> z >> tar;
    if(x*y+z == tar)flag = true;
    if(x*y-z == tar)flag = true;
    if(x+y*z == tar)flag = true;
    if(x+y-z == tar)flag = true;
    if(x-y+z == tar)flag = true;
    if(x-y*z == tar)flag = true;
    flag? cout << "YES":cout << "NO";
    cout << endl;
R:  return 0;
}
