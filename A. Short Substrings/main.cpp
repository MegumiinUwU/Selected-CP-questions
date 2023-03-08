#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/problemset/problem/1367/A
 * A. Short Substrings
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime

using namespace std;

string rev(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--) {
        string s,jojo="";
        cin>>s;
        for (int i = 0; i < s.size(); ++i) {
            if (i==s.size()-1){
                jojo=jojo+s[i];
                continue;
            }
            if(i%2==0){
                jojo=jojo+s[i];
            }
            else{
                continue;
            }



        }


    cout<<jojo<<'\n';



    }
    return 0;
}
