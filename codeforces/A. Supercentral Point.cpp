// By Ahmed Mohamed Ibrahim . Dec/01/2021 14:47
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define el endl
#define ft float
#define dl double

int main(){
    int n,c=0,a[1005],b[1005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i < n; i++){
        int q=0,w=0,e=0,r=0;
        for(int j = 0; j < n; j++){
            if(a[i]<a[j]&&b[i]==b[j])q++;
            if(a[i]>a[j]&&b[i]==b[j])w++;
            if(a[i]==a[j]&&b[i]<b[j])e++;
            if(a[i]==a[j]&&b[i]>b[j])r++;

        }
       if(q&&w&&e&&r){
            c++;
        }
    }

    cout << c << el;
return 0;
}
