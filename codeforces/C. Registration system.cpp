// By Ahmed Mohamed Ibrahim . Apr/01/2023 00:07	
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

ll  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N] , n;
char ch[30];
string s;
void swap(int x , int y){
    int a = x;
    x = y , y = a;
    cnt++;
}



int main () {                                       One_Piece_3mk
    cin >> n;
    map<string,int>mp;
    for(int i = 0; i < n; i++){
        cin >> s;
        ++mp[s];
        if(mp[s] > 1) cout << s << mp[s]-1 << endl;
        else cout << "OK" << endl;
    }

    return 0;
}
