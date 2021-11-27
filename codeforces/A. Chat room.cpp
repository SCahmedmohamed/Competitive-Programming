// By Ahmed Mohamed Ibrahim . Oct/13/2021 21:51
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	string s, word = "hello";
	cin >> s;
	int ptr1 = 0, ptr2 = 0, matching = 0;
	while(ptr1 < word.size() && ptr2 < s.size())
    {
        if(word[ptr1] == s[ptr2])
        {
            ptr1++;
            matching++;
        }
        ptr2++;
    }
    if(matching == 5)
        cout << "YES";
    else
        cout << "NO";
}
