    // By Ahmed Mohamed Ibrahim . Oct/28/2021 21:22
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int x, y, z;
        cin >>y;
        while(y--){
            cin >>x;
            set <int> b;
            while(x--){
                cin >>z;
                while(z % 2 == 0){
                    b.insert(z);
                    z = z / 2;
                }
            }
      cout << b.size() <<endl;
        }
    }
