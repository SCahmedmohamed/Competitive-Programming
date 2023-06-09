// By Ahmed Mohamed Ibrahim .May/06/2023 20:48	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(i,n) for(int i = 0; i < n; i++);

const int N = 2e5 + 5 , inf = 1e9 + 7 , NEG = -1e9 + 7;
const double Pi =  3.141592653;

int  i ,mn , mx , x , y , z, a , b , c , d, ans , cnt , arr1[N] , arr2[N] , n , m;
char ch;
string s;
bool flag , fg1;
int vis[N];
string cf = "codeforces";

int main (){                                       One_Piece_3mk
    TC{
        cnt = 0;
        cin >> s;
        for(int i = 0; i < 10; i++){
            if(s[i] != cf[i]) cnt++;
        }
        cout << cnt << el;
}
    return 0;
}
