// By Ahmed Mohamed Ibrahim . Feb/22/2023 14:14	
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi = 3.141592653;

int main (){                                One_Piece_3mk
    ll a , b , k;
    cin >> a >> b >> k;
    if(a % k == 0 && b % k ==0){
        cout << "Both" << endl;
    }else if(a % k == 0 && b % k != 0){
        cout << "Memo" << endl;
    } else if(a % k != 0 && b % k == 0){
        cout << "Momo" << endl;
    } else cout << "No One" << endl;

    return 0;
}
