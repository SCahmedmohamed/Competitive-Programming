// By Ahmed Mohamed Ibrahim .May/09/2023 20:53	
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
char ch[10][10];
string s , s1 , s2 ,s3 , s4;
bool flag , fg1;
int vis[N];

void solve(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    for(int i = 1; i < n - 1; i++){
        if(arr[i -1] + arr[i] > arr[i+1]){
            flag = true;
            break;
        }
    }

    flag ? cout << "YES" : cout << "NO";
}

int main (){                                       One_Piece_3mk
    //TC{
    solve();
    //}
    return 0;
}
/*  3 4 2
    2 3 4
    m = 2;



 */
