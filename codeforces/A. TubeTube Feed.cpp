// By Ahmed Mohamed Ibrahim .Apr/25/2023 18:10	
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

int  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr1[N] , arr2[N] , n , m;
char ch;
string s;
bool flag , fg1;
int vis[N];

int main (){                                       One_Piece_3mk
    TC{
        cin >> n >> m;
        flag = true;
        cnt = -1;
        for(int i = 0; i < n; i++) cin >> arr1[i] , arr1[i] += i;
        for(int i = 0; i < n; i++) cin >> arr2[i];
        d = -1;
        for(int i = 0; i < n; i++){
            if(arr1[i] > m) continue;
            if(arr2[i] > d) {
                d = max(arr2[i], d);
                cnt = i + 1;
            }
        }
        cout << cnt << el;
}
    return 0;
}
