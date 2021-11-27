// By Ahmed Mohamed Ibrahim . Oct/07/2021 14:19
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a, b, c, d ,y;
   cin >> y;
 
   while(y){
    y++;
 
    a = y/1000;
    b = y/100%10;
    c = y/10%10;
    d = y/1%10;
 
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d ){
        break;
    }
 
 
   }
   cout << y << endl;
}
