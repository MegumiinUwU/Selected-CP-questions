#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://atcoder.jp/contests/abc150/tasks/abc150_c
 * C - Count Order
 * By : Youssef Mohamed (MegumiinUwU)
 */

bool Dio_jotaro_checker(int arr[],int arr2[],int n){
    bool flag = true;
    for (int i = 0; i < n; ++i) {
        if (arr[i]==arr2[i]){
            continue;
        } else{
            flag = false;
            break;
        }
    }
    return flag;

}







int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
int x[n],y[n],z[n];
    for (int i = 0; i < n; ++i) {
        cin>>x[i];
        z[i]=x[i];
    }
    for (int i = 0; i < n; ++i) {
        cin>>y[i];
    }
    sort(x,x+n);
int diavolo=0,killerqueen1,killerqueen2;
    do {
        if (Dio_jotaro_checker(x,z,n)){
            killerqueen1=diavolo;
        }
        if(Dio_jotaro_checker(x,y,n)){
            killerqueen2=diavolo;
        }
        diavolo++;

    } while (next_permutation(x,x+n));

cout<<abs(killerqueen2-killerqueen1);

    return 0;
}
