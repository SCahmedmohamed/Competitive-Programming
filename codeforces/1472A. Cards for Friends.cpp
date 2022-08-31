// By Ahmed Mohamed Scorpion . Jul/27/2022 16:09
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

int t , n , w , h;

int main()
{
    cin >> t;
    while(t--){
    cin>>w>>h>>n;
		w &= -w;
		h &= -h;
		if(w*h>=n)YES
		else NO
    }
    return 0;
}
