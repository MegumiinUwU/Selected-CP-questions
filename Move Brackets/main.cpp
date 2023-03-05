#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/problemset/problem/1374/C
 * Move Brackets
 * By : Youssef Mohamed (MegumiinUwU)
 */




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;string s;
    cin>>t;
    while (t--){
        cin>>n>>s;
        int open=0,close=0,steps=0;
        for (int i = 0; i < n; ++i) {
            if(s[i] == '(' && s[i+1] == ')'){
                i++;
                continue;
            }
            if(s[i]== '('){
                open+=1;
            }
            if (s[i]==')'){
                close+=1;
                if(close>open){
                    steps+=1;
                    close--;
                    continue;
                }


            }

        }
        cout<<steps<<'\n';

    }


    return 0;
}
