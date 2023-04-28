#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Helpful Maths
 * problem link : https://codeforces.com/problemset/problem/339/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s2="";
    cin>>s;
    int y=0,x=0;
    bool flag= false,flag2= false;

    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='1'){
            flag = true;

            if (i==0 ){
                s2+='1';
            } else if(s2.size()>=1){
                s2= s2 + '+';s2 = s2 + '1';
            } else{
                s2 = s2 + '1';
            }

        }
        if (s[i]=='2'){
            x++;
        }
        if (s[i]=='3'){
            y++;
        }
    }
    for (int i = 0; i < x; ++i) {
        flag2 = true;
        if (i==0 && flag ){
            s2+='+';
            s2+='2';
        } else if (i==0){
            s2+='2';
        } else {
            s2+='+';
            s2+='2';
        }

    }
    for (int i = 0; i < y; ++i) {
        if (i==0 && (flag || flag2)){
            s2+='+';
            s2+='3';
        }
        else if (i==0){
            s2+='3';
        } else {
            s2+='+';
            s2+='3';
        }
    }

cout<<s2;



    return 0;
}