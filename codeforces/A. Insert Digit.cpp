// By Ahmed Mohamed Ibrahim . Apr/07/2023 01:22	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5 , inf = 1e9 + 7 , NEG = -1e9 + 7;
const double Pi =  3.141592653;

ll  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N] , n , m;
char ch[30];
string s;
bool flag;

int lower(int a , int b){
    if(a < b) return a;
    return b;
}

int main (){                                       One_Piece_3mk
    TC{
        flag = true;
        cin >> n  >> a >> s;
        char k = '0';
        k += a;
        for(int i = 0; i < n; i++){
            if(s[i] < k && flag == true) {
                cout << k;
                flag = false;
            }
            cout << s[i];
        }
        if(flag) cout << k;
        cout << el;
    }
    return 0;
}
