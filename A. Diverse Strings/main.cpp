#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool existinstring(char c,string s){
    bool t = false;
    for (int i = 0; i <s.size() ; ++i) {
        if(c == s[i]){
            t= true;
        }
    }
    return t;


/*
 * Problem link : https://codeforces.com/contest/1144/problem/A
 * A. Diverse Strings
 * By : Youssef Mohamed (MegumiinUwU)
 */




}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--){
        string s,blacklist="";
        int jojo=0;
        bool flag1 = true, flag2= true;
        cin>>s;
        for (int i = 0; i < s.size(); ++i) {
            if(existinstring(s[i],blacklist)){
                flag1= false;
                break;
            } else{
                blacklist+=s[i];
            }
        }
        std::sort(blacklist.begin(), blacklist.end());
        if (flag1){
            int j=0;
            for (char i = blacklist[0]; i <= 'z' ; ++i) {

                if (blacklist[j]==i){
                    jojo++;
                    j++;

                }
                else{
                    break;
                }

            }
        }
        if(jojo == blacklist.length()){
            cout<<"Yes"<<'\n';
        } else{
            cout<<"No"<<'\n';
        }
    }


    return 0;
}
