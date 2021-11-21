// By Ahmed Mohamed Ibrahim . Nov/19/2021 15:16
#include <bits/stdc++.h>
    using namespace std;
    void string_search(string s){
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            if(s.find('H')+1 || s.find('Q')+1 || s.find('9')+1){
                cout << "YES";
                break;
            } else {cout << "NO"; break;}
        }
    }
    int main()
    {
        string s;
    string_search(s);
    }
