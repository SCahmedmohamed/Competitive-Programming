// By Ahmed Mohamed Ibrahim . Dec/16/2021 20:54
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    Scorpion
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n;
        while(k)
        {
            if ( ( k % 10 ) && ( n % ( k % 10 ) ) )
            {
                n++;
                k=n;
            }
            else
                k/=10;
        }
        cout<<n<<endl;
    }
    return 0;
}
