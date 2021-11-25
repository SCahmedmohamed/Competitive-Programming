    // By Ahmed Mohamed Ibrahim . Nov/06/2021 23:46
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        string s,r;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'o' || s[i] == 'O' || s[i] == 'y' || s[i] == 'Y' || s[i] == 'e' || s[i] == 'E' || s[i] == 'u' || s[i] == 'U' || s[i] == 'I' || s[i] == 'i' ){
                continue;
                cout << '.';
            }
            if(isupper(s[i])){
                s[i] = s[i] + 32;
            }
     
            cout << '.' << s[i];
        }
     
    }
