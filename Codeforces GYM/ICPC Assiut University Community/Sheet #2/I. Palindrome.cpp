// By Ahmed Mohamed Ibrahim .Mar/12/2023 22:53	
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

ll t, n , a[N] , mx , mn, ans , x , y, z = -1;
string s;

void bigger(int x , int y){
    if(x > y) mx = x , mn = y;
    else mx = y , mn = x;
}

int main (){                                One_Piece_3mk
    cin >> s;
    string x = s;
    reverse(x.begin(), x.end());
    if(x == s) cout << s << endl << "YES" << endl;
    else{
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i ++){
            if(s[i] != '0'){
                goto L;
            } else n++;
        }
      L:for(int i = n; i < s.size(); i++){
            cout << s[i];
        }
        cout << endl << "NO" << endl;
    }
    return 0;
}
