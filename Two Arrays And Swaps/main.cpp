#include <bits/stdc++.h>
#define ll long long

/* Problem link : https://codeforces.com/problemset/problem/1353/B
 * Two Arrays And Swaps
 * By : Youssef Mohamed (MegumiinUwU)
 */

int minofarray (int a[],int n){
int minn, index;
    minn =*std::min_element(a,a+n);
    for (int i = 0; i < n; ++i) {
        if(minn == a[i]){
            index = i;
            break;
        }

    }
    return index;

}

int maxofarr (int a[], int n){
    int maxx, index;
    maxx =*std::max_element(a,a+n);
    for (int i = 0; i < n; ++i) {
        if(maxx == a[i]){
            index = i;
            break;
        }

    }
    return index;



}


using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t, maxmoves,n;
cin>>t;
    while (t--){
cin>> n >> maxmoves;
int a[n],b[n], finalsum=0,jojo1,jojo2;
        for (int i = 0; i < n; ++i) {
            cin>> a[i];

        }

        for (int i = 0; i < n; ++i) {
            cin>> b[i];

        }


        while (maxmoves--){
            jojo1 = minofarray(a,n);
            jojo2 = maxofarr(b,n);
            if(a[jojo1] >= b[jojo2]){
                continue;
            }
            swap(a[jojo1],b[jojo2]);
        }




        for (int i = 0; i < n; ++i) {
            finalsum+=a[i];
        }
        cout<<finalsum<<'\n';

    }


    return 0;
}
