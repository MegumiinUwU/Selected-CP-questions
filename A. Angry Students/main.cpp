#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/contest/1287/problem/A
 * A. Angry Students
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int sum = 0;
        string s2;
        while (true){
            sum++;s2=s;
            for (int i = 0; i < n-1; ++i) {

                if (s[i]=='A' && s[i+1]=='P'){
                    s[i+1]='A';
                    i++;
                }
            }

            if (s2 == s){
                break;
            } else{
                continue;
            }

        }
        cout<<sum-1<<'\n';




    }
    return 0;
}


