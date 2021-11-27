// By Ahmed Mohamed Ibrahim . Oct/09/2021 01:33
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n , number;
    cin >> n;
    cin >> number;
 
    if(number <= (n+1)/2){
        cout << (2*number)-1 << endl;
    }else{
        number = number - ((n+1) /2);
        cout << 2*number << endl;
    }
    return 0;
}
