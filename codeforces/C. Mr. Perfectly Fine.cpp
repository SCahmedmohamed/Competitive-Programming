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

const int N = 2e5 + 5 , inf = 1e9 + 7 , NEG = -1e9 + 7;
const double Pi =  3.141592653;

int  mn , mx , x , y , z, a , b , c , d, ans1 , ans2 , ans3 , cnt , arr[N] , arr2[N] , n , m;
char ch;
string s;
bool flag , fg1;
int vis[N];

int main (){                                       One_Piece_3mk
    TC{
        ans1 = inf , ans2 = inf , ans3 = inf;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i] >> arr2[i];
        for(int i = 0; i < n; i++){
            if(arr2[i] == 11){
                ans1 = min(ans1,arr[i]);
            }else if(arr2[i] == 01) {
                ans2 = min(ans2, arr[i]);
            }
            else if(arr2[i] == 10) {
                ans3 = min(ans3, arr[i]);
            }
        }
        if(ans1 != inf || ans2 != inf && ans3 != inf){
            cout << min(ans1,ans2+ans3) << el;
        }else cout << -1 << el;
}
    return 0;
}
