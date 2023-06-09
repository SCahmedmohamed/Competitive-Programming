// By Ahmed Mohamed Ibrahim .May/07/2023 23:23	
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
string s;
bool flag , fg1;
int vis[N];

void solve(){
    for(int i = 1; i <= 8; i++)
        for(int j = 1; j <= 8; j++)
            cin >> ch[i][j];

    for(int i = 1; i <= 8; i++){
        ans1 = 0 , ans2 = 0;
        for(int j = 1; j <= 8; j++){
            if(ch[i][j] == 'R') ans1++;
            if(ch[j][i] == 'B') ans2++;
        }
        if(ans1 == 8){
            cout << 'R' << el;
            return;
        }else if(ans2 == 8){
            cout << "B" << el;
            return;
        }
    }
}

int main (){                                       One_Piece_3mk
    TC{

    solve();
    }
    return 0;
}
