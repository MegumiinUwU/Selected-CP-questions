#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/contest/1791/problem/A
 * A. Codeforces Checking
 * By : Youssef Mohamed (MegumiinUwU)
 */
using namespace std;



bool checker (char c){
    string x = "codeforces";
    bool jojo = false;
    for (int i = 0; i < x.size(); ++i) {
        if(x[i] == c){
            jojo = true;
            break;
        }
    }
    return jojo;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.sync_with_stdio(0);
int t; char c;
cin>>t;
    while (t--){
        cin>>c;
        if (checker(c)){
            cout<<"YES"<<'\n';
        }
        else {
            cout<<"NO"<<'\n';
        }

    }


    return 0;
}
