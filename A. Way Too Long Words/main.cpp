#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/contest/71/problem/A
 * A. Way Too Long Words
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
string s,jojo="";
int t;
cin>>t;
    while (t--){

        cin>>s;
        if (s.size()>10){
            jojo = jojo + s[0];
            jojo = jojo + to_string((s.size()-2));
            jojo = jojo + s[s.size()-1];

        } else{
            jojo=s;
        }
        cout<<jojo<<'\n';
        jojo="";



    }

    return 0;
}
