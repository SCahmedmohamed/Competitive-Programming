// By Ahmed Mohamed Ibrahim .Jan/27/2023 00:24	
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define ll long long
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi = 3.141592653;
int year , day , month;
int main (){                                Scorpion
    int x , y , z;
    int a[20];
    cin >> x >> y >> z;
    a[0] = x,a[1] = y, a[2] = z;
    sort(a,a+3);
    for(int i =0; i < 3; i++){
        cout << a[i] << endl;
    }
    cout << endl;
    cout << x << endl << y << endl << z << endl;
    return 0;

}

