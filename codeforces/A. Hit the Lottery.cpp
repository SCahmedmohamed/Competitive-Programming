// By Ahmed Mohamed Ibrahim . Oct/04/2021 22:06
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long n, answer = 0;
 
    cin >> n;
        if(n >= 100){
            answer += n / 100;
            n = n % 100;
        }
        if(n >= 20){
            answer += n / 20;
            n = n % 20;
        }
        if(n >= 10){
            answer += n / 10;
            n = n % 10;
        }
        if(n >= 5){
            answer += n / 5;
            n = n%5;
        }
        if(n >= 1){
            answer += n / 1;
            n = n%1;
        }
    cout << answer << endl;
}
