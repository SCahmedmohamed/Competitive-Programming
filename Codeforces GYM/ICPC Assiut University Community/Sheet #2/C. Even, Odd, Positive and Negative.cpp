// By Ahmed Mohamed Ibrahim .Mar/09/2023 19:57	
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define TC int t;cin>>t;while(t--)
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi =  3.141592653;

int eve , odd, pos, neg;

int main (){                                One_Piece_3mk
    int n , a[N];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0) eve++;
        if(a[i] % 2 != 0) odd++;
        if(a[i] > 0) pos++;
        if(a[i] < 0) neg++;
    }
    cout << "Even: " << eve << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
R:  return 0;
}
