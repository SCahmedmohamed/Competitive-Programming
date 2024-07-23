// author : Ahmed Mohamed Ibrahim
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define TC int t;cin>>t;while(t--)
#define lli long long int
#define endl '\n'
#define el '\n'
#define F first
#define S second

#define Ahmed(itsSCORPION) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1e6 + 5, inf = 1e9 + 7, NEG = -1e9 + 7;
const double Pi = 3.14159265359;

double n , arr[N], ans , a , b , c , m , d , cnt , arr2[N], cnt22 , f , x , k ,vis[N];
string s;
char ch[1000][1000];
vector<int>v;
bool   hp1 , slv;



void solve() {
    cout << fixed << setprecision(3);
    cin >> n;
    ans = 0,  cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        cnt += arr[i];
    }
    cnt /= n;
    for(int i = 0; i < n; i++){
        if(arr[i] > cnt) ans++;
    }
    cout << (ans / n) * 100 << "%" << el;
}
int main (){                                       Ahmed(itsScorpion)
    TC{
        solve();
    }
    return 0;
}
