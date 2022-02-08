// By Ahmed Mohamed Ibrahim . Feb/09/2022 01:32
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    Scorpion
    int a,sum=0,s=0, b[12];
    cin>>a;
    for(int i=0; i<12; i++){
    cin>>b[i];
    }
    sort(b,b+12);
    for(int i=11; i>=0; i--){
        if(sum < a ){
            sum += b[i];
            s++;
        }
        if(sum >= a ){
            cout << s;
            return 0;
        }
    if(s == 12 && sum < a )
        cout<<"-1";
}
    return 0;
}
