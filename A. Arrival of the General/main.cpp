#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/contest/144/problem/A
 * A. Arrival of the General
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,jojo=0,x,y;
cin>>n;
int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
x= *max_element(arr,arr+n);
y= *min_element(arr,arr+n);
    for (int i = 0; i < n; ++i) {
        if (arr[i]==x){
            jojo = jojo + i;
            break;
        }

    }
    for (int i = n-1; i >= 0; --i) {
        if(arr[i]==y){
            if (i<jojo){
                jojo= jojo +(n-1-i-1);
            } else{
                jojo+= (n-1-i);
            }
            break;
        }
    }





cout<<jojo;
    return 0;
}
