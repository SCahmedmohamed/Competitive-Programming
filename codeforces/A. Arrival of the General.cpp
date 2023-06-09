// By Ahmed Mohamed Ibrahim .Apr/29/2023 16:29	
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

int  mn , mx , x , y , z, a2 , b , c , d, ans , cnt , a[N] , arr2[N] , n , m;
char ch;
string s;
bool flag , fg1;
int vis[N];

int main (){                                       One_Piece_3mk
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int Max = 0, Min = n - 1;
    for(int i = 0; i < n; i++)
        if(a[i] > a[Max])Max = i;
    for(int i = n - 1; i >= 0; i--)
        if(a[i] < a[Min])Min = i;

    if(Max < Min)cout << Max + (n - Min - 1) << endl;
    else cout << Max + (n - Min - 1) - 1 << endl;
    return 0;
}
