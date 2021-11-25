    // By Ahmed Mohamed Ibarhim . Nov/07/2021 22:09 	
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int x, a = 0, d = 0;
        cin >> x;
        string s;
        cin >> s;
        for(int i = 0; i < x; i++){
            if(s[i] == 'A'){
                a++;
            } else{d++;}
     
        }
        if(a > d) cout << "Anton";
        if(a < d) cout << "Danik";
        if(a == d) cout << "Friendship";
     
        return 0;
     
    }
