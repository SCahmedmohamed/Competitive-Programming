// By Ahmed Mohamed Ibrahim .
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define el '\n'
#define F first
#define S second
#define One_Piece_3mk ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5 , inf = 1e9 + 7 , NEG = -1e9;
const double Pi = 3.141592653;

void print_next_ch(char ch){
    // if your limit from a - z then:
    if(ch == 'z') cout << 'a'<< endl;
    else{
        ch++;
        cout << ch << endl;
    }
    // if you havent limit then:
    ch++;
    cout << ch << endl;
}

void print_the_ascii_value_of_ch(char ch){
    cout << int(ch) << endl;
}


int main (){                                One_Piece_3mk
    char ch;
    cin >> ch;
   // print_next_ch(ch);
    print_the_ascii_value_of_ch(ch);
    return 0;
}
// remember that the lower case's ascii value is bigger than big letters a > A z > Z
// A == 65 Z == 90
// a == 97 z == 122
// A --> a A+32
// a --> A A-32
