#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n = 9;
    int array[] = {12,60,15,59,15,53,31,19,24};
    sort(array,array + n); // should be sorted
    // after sorting array[] = {12,15,15,19,24,31,53,59,60};
    int x = 59; // the target

    int left = 0 , right = n - 1;
    while(left <= right){
        int mid = left + ( right - left ) / 2 // also : mid = (left + right) / 2;
        if(array[mid] == x){
            cout << "YES";
            return;
        }else{
            if(array[mid] > x)  right = mid - 1;
            //from mid to right are bigger than x
            else
                left = mid + 1;
            // from left to mid are smaller than x
        }
    }
    cout << -1; // when right > left and we didnt get the number
}

int main (){
    solve();

    return 0;
}
