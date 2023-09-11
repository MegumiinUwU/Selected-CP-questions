#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;
/*
 * Link : https://codeforces.com/problemset/problem/92/B
 * Name : B. Binary Number
 * By : Youssef Mohamed (MegumiinUwU)
 */




bool doexist(string jojo, char d){

    for (int i = 0; i < jojo.size(); ++i) {
        if (jojo[i]==d){
            return true;
        }
    }
    return false;

}

bool isprime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0)
            return false;
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string jojo; cin>>jojo;
    int eris=0;
    while (jojo.size()!=1){
        int n = jojo.size()-1;
        if (jojo[n]=='0'){
            jojo.pop_back();
            eris++;
        }
        else{
            bool flag = false;
            for (int i = n; i >= 0; --i) {
                if (jojo[i]=='1' && flag == false){
                    jojo[i]='0';
                    continue;
                }
                if (jojo[i]=='0'){
                    jojo[i]='1';
                    flag= true;
                    break;
                }
            }
            if (flag== false){
                jojo = '1' + jojo;
            }
            eris++;
        }

    }
    cout<<eris<<'\n';



    return 0;

}
