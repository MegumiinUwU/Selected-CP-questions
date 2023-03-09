#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/problemset/problem/443/A
 * A. Anton and Letters
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime

using namespace std;

bool existinstring(char c,string s){
bool t = false;
    for (int i = 0; i <s.size() ; ++i) {
        if(c == s[i]){
            t= true;
        }
    }
    return t;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
string s,blacklist="";
    getline(cin,s);
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]>='a' && s[i]<='z') {
            if (existinstring(s[i],blacklist)){
                continue;
            } else{
                blacklist+=s[i];
            }



        }

        }


cout<<blacklist.size();


    return 0;
}
