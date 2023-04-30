#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Single Push
 * problem link : https://codeforces.com/contest/1253/problem/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--){
        ll n,k=0,start=0;
        bool onetimeflag = true, flag = true,flag2 = true, streak = true ;
        cin>>n;
        ll arr1[n],arr2[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>arr2[i];

            if (arr2[i]>arr1[i] && onetimeflag){
                k = arr2[i]-arr1[i];
                start = i;
                onetimeflag = false;
            }
            if (arr2[i]<arr1[i]){
                flag2 = false;
            }

        }
        if (flag2== false){
            cout<<"NO"<<'\n';
            continue;
        }


        for (int i = start; i < n; ++i) {
            if (arr1[i]+k==arr2[i] && streak ){
                continue;

            } else if (arr2[i]==arr1[i]){
                streak = false;
            }
            else if (streak== false && arr1[i]!=arr2[i]){
                flag = false;
                break;
            } else{
                flag = false;
                break;
            }

        }
        if (flag){
            cout<<"YES"<<'\n';
        } else{
            cout<<"NO"<<'\n';
        }



    }

    return 0;
}
