// By Ahmed Mohamed Ibrahim . Apr/17/2023 22:51	
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
char ch;
string s;
bool flag , fg1;
int vis[N];

int main (){                                       One_Piece_3mk
    TC{
        cin >> s >> ch;
        flag = false;
        for(int i = 0; i < s.size(); i+=2){
            if(s[i] == ch) {
                flag = true;
            }
        }
        flag ? cout << "YES":cout<<"NO";
        cout << el;
}
    return 0;
}
