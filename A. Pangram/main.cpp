#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool existinstring(char c,string s) {
    bool t = false;
    for (int i = 0; i < s.size(); ++i) {
        if (c == s[i]) {
            t = true;
        }
    }
    return t;
}


/*
 * Problem link : https://codeforces.com/contest/520/problem/A
 * A. Pangram
 * By : Youssef Mohamed (MegumiinUwU)
 */






int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
string s,blacklist="";
int n;
cin>>n;
cin>>s;
    for (int i = 0; i < s.size(); ++i) {
        s[i] = tolower(s[i]);
        if (existinstring(s[i],blacklist)){
            continue;
        } else{
            blacklist+=s[i];
        }
    }


    if (blacklist.size()==26){
        cout<<"YES";
    } else{
        cout<<"NO";
    }




    return 0;
}
