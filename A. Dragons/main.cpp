#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Dragons
 * problem link : https://codeforces.com/problemset/problem/230/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,n;
    cin>>s>>n;
    int sum1=s,sum2=0;
    multimap<int,int>jojo;
    for (int i = 0; i < n; ++i) {
        int z,zz;
        cin>>z>>zz;
        jojo.emplace(z,zz);
    }
    bool flag = false;
    auto it = jojo.begin();
    for (int i = 0; i < n; ++i) {
        if (it->first<sum1){
            sum2++;
            sum1+=it->second;
        } else{
            flag = true;
            break;
        }
        it++;
    }

    if (flag){
        cout<<"NO";
    } else{
        cout<<"YES";
    }
    return 0;
}