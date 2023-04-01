// By Ahmed Mohamed Ibrahim .Apr/01/2023 23:28	
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

double  mn , mx , x , y , z, a , b , c , d, ans , cnt , arr[N] , n , m;
char ch[30];
string s;
bool flag;

void file(){
#ifdef Clion
    freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int prime(int a){
    int cnt = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0 /*&& a != i && i != 1*/) cnt++;
    }
    return cnt;
}
bool isprime(int u){
    for(int i = 0; i <= u; i++){
        if(u % i == 0)flag = false;
        else flag = true;
    }
    return flag;
}

int main () {                                       One_Piece_3mk
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        flag = false;
        if(a + b == c) flag = true;
        if(a + c ==b) flag = true;
        if(c + b == a) flag = true;
        flag? cout << "YES":cout<<"NO";
        cout << el;
    }
    return 0;
}
