#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Mike and palindrome
 * Problem link : https://codeforces.com/problemset/problem/798/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mist=0;
    string s,s2="";
    cin>>s;
    s2 = s;
    std::reverse(s.begin(), s.end());
    if (s2==s && s.size()%2==1){
        cout<<"YES";
    } else{
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]==s2[i]){
                continue;
            } else{
                mist++;
            }
        }
        if (mist==2){
            cout<<"YES";
        } else{
            cout<<"NO";
        }
    }
    return 0;
}
