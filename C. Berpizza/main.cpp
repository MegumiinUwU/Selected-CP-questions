#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * C. Berpizza
 * problem link : https://codeforces.com/problemset/problem/1468/C
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;cin>>t;
int customer = 1;
multimap<int,int> jojorestaurant,jojomoney;
    while (t--){
        int x,money;
        cin>>x;
        if (x==1){
            cin>>money;
            jojorestaurant.emplace(customer,money);
            jojomoney.emplace(-money,customer);
            customer++;
        }
        if (x==2){
            auto it1 = jojorestaurant.begin();
            auto it2 = jojomoney.find(-it1->second);
            cout<<it1->first<<" ";
            jojorestaurant.erase(it1);
            jojomoney.erase(it2);
        }
        if (x==3){
            auto itt1 = jojomoney.begin();
            auto itt2 = jojorestaurant.find(itt1->second);
            cout<<itt1->second<<" ";
            jojomoney.erase(itt1);
            jojorestaurant.erase(itt2);

        }


    }



    return 0;
}