#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/contest/1791/problem/C
 * C. Prepend and Append
 * By : Youssef Mohamed (MegumiinUwU)
 */
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.sync_with_stdio(0);
int t, n; string s;
cin>> t;
    while (t--){
        int initial;
cin>>n>>s;
initial = n;
        for (int i = 0; i < s.size(); ++i) {

            if (i < s.size()-1-i){
                if( (s[i]=='0' && s[s.size()-1-i] == '1') || (s[i]=='1' && s[s.size()-1-i] == '0') ){

                    initial-=2;


                }
                else{
                    break;

                }
            }

        }

cout<<initial<<'\n';
    }

    return 0;
}
