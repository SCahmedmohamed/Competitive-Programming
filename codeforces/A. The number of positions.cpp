// By Ahmed Mohamed Ibrahim . Sep/20/2021 21:47
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    int a;
    int b;
    
    // n عدد الناس 
    // a الناس اللي قدامه
    // b الناس اللي قبله 
    
    cin >> n;
    cin >> a;
    cin >> b;
    
    if((n-a)>(b+1))
        cout<<b+1;
    else
        cout<<n-a;
 
}
