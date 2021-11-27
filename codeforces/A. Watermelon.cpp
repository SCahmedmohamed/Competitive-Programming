// By Ahmed Mohamed Ibrahim . Sep/13/2021 22:24
#include <iostream>
using namespace std;
 
int main(){
 
    int x;
    cin >> x;
 
    if(x==2){
        cout << "No" << endl;
    } else{
        if (x%2){
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
 
    return 0;
}
