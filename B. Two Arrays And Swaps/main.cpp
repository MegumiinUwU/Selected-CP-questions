#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/contest/1353/problem/B
 * B. Two Arrays And Swaps
 * By : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        int arr1[n],arr2[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr1[i];
        }
        for (int i = 0; i < n; ++i) {
            cin>>arr2[i];
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        int sum =0;int j=0;
        for (int i = n-1; i >=0 ; --i) {


            if (arr1[j]<arr2[i] && k>0){
                k--;
                arr1[j]=arr2[i];

            }
            sum=sum+arr1[j];
            j++;

        }
        cout<<sum<<'\n';

    }


    return 0;
}


