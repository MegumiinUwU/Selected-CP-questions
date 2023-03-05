#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/contest/26/problem/B
 * Regular Bracket Sequence
 * By : Youssef Mohamed (MegumiinUwU)
 */




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    int open=0,close=0,regular=0;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '('){
            open++;
            regular++;
        }
        else if(open > 0 && s[i]==')'){
            open--;
            regular++;

        }

    }
cout<< regular-open;

    return 0;
}
