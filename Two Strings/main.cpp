#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://www.hackerrank.com/challenges/two-strings/problem
 * Two Strings
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t ;
cin>>t;
    while (t--){
        string s1,s2;
        bool flag = false;
        cin>>s1>>s2;
        set<char> ss1,ss2;
        for (int i = 0; i < s1.size(); ++i) {
            ss1.emplace(s1[i]);
        }
        for (int i = 0; i < s2.size(); ++i) {
            auto it = ss1.find(s2[i]);
            if (it!=ss1.end()){
                flag= true;
                break;
            }
        }

        if (flag){
            cout<<"YES"<<'\n';
        } else{
            cout<<"NO"<<'\n';
        }

    }
    return 0;
}