// By Ahmed Mohamed Ibrahim . Mar/10/2023 15:50	
#include <bits/stdc++.h>
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

ll t, n , a[N] , ans = 1;

int main (){                                One_Piece_3mk
    cin >> n;
    if(n>=2) cout << 2 << " ";
    for(int i = 3; i <= n; i++){
        bool flag = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0) flag = false;
        }
        if(flag) cout << i << " ";
        else continue;
    }
R:  return 0;
}
