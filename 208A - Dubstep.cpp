#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Dubstep
 * Problem link : https://codeforces.com/problemset/problem/208/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string jojo,jojo2="";
    cin>>jojo;
    for (int i = 0; i < jojo.size(); ++i) {
        if (jojo[i]=='W'){
            if (jojo.substr(i,3)=="WUB"){
                if (i>0 && jojo2[jojo2.size()-1]!=' ' && jojo2.size()>=1){
                    jojo2+=" ";
                }
                i+=2;

                continue;
            } else{
                jojo2+=jojo[i];
            }

        } else{
            jojo2+=jojo[i];
        }



    }
    cout<<jojo2;


    return 0;
}
