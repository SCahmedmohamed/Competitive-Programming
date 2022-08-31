// By Ahmed Mohamed Scorpion . Jul/27/2022 16:17
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define yes cout << "yes" << el;
#define no cout << "no" << el;
#define YES cout << "YES" << el;
#define NO cout << "NO" << el;
#define ff first
#define ss second

int t , n , a , b , z;

int main()
{
    cin >> t;
    while(t--){
        a = 0;
        b = 0;
        cin >> n;
        while(n--){
            cin >> z;
            if(z  == 1) a++;
            else b++;

        }
        if(a%2 || b%2 && a < 2)
            NO  
        else YES
    }
    return 0;
}
