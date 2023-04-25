// By Ahmed Mohamed Ibrahim .Apr/25/2023 18:47	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5 , inf = 1e9 + 7 , NEG = -1e9 - 7;
const double Pi =  3.141592653;

ll  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N] , arr2[N] , n , m;
char ch;
string s;
bool flag , fg1;
int vis[N];

int main (){                                       One_Piece_3mk
    TC{
        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr,arr+n);
        a = arr[0] * arr[1];
        b = arr[n-2] * arr[n-1];
        cout << max(a,b) << el;
}
    return 0;
}
