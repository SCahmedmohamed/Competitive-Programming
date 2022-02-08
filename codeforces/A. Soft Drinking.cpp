// By Ahmed Mohamed Ibrahim . Feb/02/2022 14:52
#include <bits/stdc++.h>
using namespace std;
int n , k , l , c , d , p , nl ,np;
int main()
{
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout << min(min(k*l/nl,p/np),c*d)/n<< endl;
return 0;
}
