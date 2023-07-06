#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Mahmoud and Longest Uncommon Subsequence
 * Problem link : https://codeforces.com/contest/766/problem/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int mark,morioh=0;
    bool flag = false;
    if (s2.size()>=s1.size()) {
        for (int i = 0; i < s1.length(); ++i) {
            if (s1[i] == s2[0]) {
                mark = i;
                flag = true;
                break;
            }
        }
        if (flag) {
            if (s2 == s1.substr(mark, s1.size() - mark)) {
                cout << -1;
            } else {

                cout << s2.size();
            }
        } else {

            cout << s2.size();
        }

    }
    else
    {
        for (int i = 0; i < s2.length(); ++i) {
            if (s2[i] == s1[0]) {
                mark = i;
                flag = true;
                break;
            }
        }
        if (flag) {
            if (s1 == s2.substr(mark, s2.size() - mark)) {
                cout << -1;
            } else {

                cout << s1.size();
            }
        } else {

            cout << s1.size();
        }
    }

    return 0;
}
