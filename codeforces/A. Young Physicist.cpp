    // By Ahmed Mohamed Ibrahim  . Oct/14/2021 16:52
    #include <iostream>
    #include <cmath>
    #define ll long long
    using namespace std;
    int main(){
     
        ll a, x, y, z, xsum(0), ysum(0), zsum(0);
        cin >> a;
     
        while(a--){
            cin >> x >> y >> z;
            xsum += x;
            ysum += y;
            zsum += z;
        }
        if(xsum == 0 && ysum == 0 && zsum ==0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
     
     
    }
