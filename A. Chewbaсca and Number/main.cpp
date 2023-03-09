#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/contest/514/problem/A
 * A. Chewbaсca and Number
 * By : Youssef Mohamed (MegumiinUwU)
 */

//Obi-wan is the best





using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll jojo;
string s;
cin>>s;

    for (int i = 0; i < s.size(); ++i) {
        if(i==0 && s[i]-'0' == 9){
            continue;
        }
        if ((9 - (s[i]-'0') ) >= 0 &&  (9 - (s[i]-'0') )< (s[i]-'0') ){
            int x;
            x = 9 - (s[i]-'0');
            s[i] = x + '0';
        } else{
            continue;
        }

    }
cout<<s;
    return 0;
}
