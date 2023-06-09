// By Ahmed Mohamed Ibrahim .May/19/2023 19:27	
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
const double Pi =  3.14159265359;

ll  mn , mx , x , y , z, a , b , c , d, k , ans1 , ans2 , ans3 , cnt , arr[N] , arr2[N],arr3[N] , n , m;
char ch[26];
string s , s1 , s2 ,s3 , s4;
bool flag , fg1;
int vis[N];
vector<pair<int,int>> v;
void solve(){
    v.clear();
    cin >> n >> k;
    for(int i = 0; i <n ; i++){
        cin >> arr[i];
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i++) cin >> arr2[i];
    sort(arr2,arr2+n);
    for(int i = 0; i < n; i++){
        arr3[v[i].S] = arr2[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr3[i] << " ";
    }
    cout << el;
}

int main (){                                       One_Piece_3mk
    TC{
    solve();
}
    return 0;
}
