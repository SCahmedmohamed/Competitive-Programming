// By Ahmed Mohamed Ibrahim . Dec/04/2021 19:37
#include <bits/stdc++.h>
#define ll long long
#define el endl
#define ft float
#define ld long double
using namespace std;
int main()
{
    int n , b = 0, c = 0, k = 0, l = 0 , a;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a;
		if (a%2 == 0){
            b++;
            k=i+1;
        }

		else {
            c++;
            l=i+1;
        }
	}
	if(b==1) cout<<k;
	else cout << l << el;
	return 0;
}
