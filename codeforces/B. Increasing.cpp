// By Ahmed Mohamed Ibrahim .May/07/2023 20:28	
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
        cin >> n;
        flag = true;
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr,arr+n);
        for(int i = 1; i < n; i++){
            if(arr[i] <= arr[i-1]) flag = false;
        }
        flag ? cout << "YES" : cout << "NO";
        cout << el;
}

    return 0;
}
