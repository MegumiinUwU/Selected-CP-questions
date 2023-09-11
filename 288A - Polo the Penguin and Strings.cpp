#include <bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
using namespace std;
/*
 * Link : https://codeforces.com/problemset/problem/288/A
 * Name : A. Polo the Penguin and Strings
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
    int n,k;cin>>n>>k;
    string jojo="";
    if (k>n ||(k==1&&n>1)){
        cout<<-1;
        return 0;
    }
    int x = k-2 , y =n-x ;
    if (k==2){
        for (int i = 0; i < n; ++i) {
            if (i%2==0){
                jojo+='a';
            } else{
                jojo+='b';
            }
        }
        cout<<jojo;
        return 0;
    }
    if (k==1 && n==1){
        cout<<"a";
        return 0;
    }
    for (int i = 0; i < y; ++i) {
        if (i%2==0){
            jojo+='a';
        } else{
            jojo+='b';
        }
    }
    for (int i = 0; i < x; ++i) {
        jojo += ('c'+i);
    }
    cout<<jojo;
    return 0;

}
