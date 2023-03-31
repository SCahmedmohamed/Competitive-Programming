// By Ahmed Mohamed Ibrahim .Apr/01/2023 00:50	
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

ll  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N] , n , m;
char ch[30];
string s;
void swap(int x , int y){
    int a = x;
    x = y , y = a;
    cnt++;
}

void solve1(){
    for(int i = 0; i < m; i++) cout << '#';
    cout << endl;
}

void solve2(){
    for(int i = 0; i < m -1 ; i++) cout << '.';
    cout << '#' << endl;
}

void solve3(){
    cout << '#';
    for(int i = 0; i < m-1 ; i++) cout << '.';
    cout << endl;
}
int main () {                                       One_Piece_3mk
    cin >> n >> m;
    cnt = n / 2;
    while(n){
        if(n >= 4){
            n -= 4;
            solve1();
            solve2();
            solve1();
            solve3();
        }
        if(n == 3){
            n-=3;
            solve1();
            solve2();
            solve1();
        }
        if(n == 2){
            n-=2;
            solve1();
            solve2();
        }
        if(n == 1){
            n-=1;
            solve1();
        }
    }
    return 0;
}
