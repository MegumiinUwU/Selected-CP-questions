#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Lights Out
 * problem link : https://codeforces.com/contest/275/problem/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3][3];
    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin>>arr[i][j];
        }
    }
    int up,down,left,right,jojo;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {

            if (i==0){
                up=0;
            } else{
                up = arr[i-1][j];
            }
            if (i==2){
                down=0;
            } else{
                down = arr[i+1][j];
            }
            if (j==0){
                left=0;
            } else{
                left = arr[i][j-1];
            }
            if (j==2){
                right=0;
            } else{
                right=arr[i][j+1];
            }

            jojo= up+down+left+right+arr[i][j];
            if (jojo%2==0){
                cout<<1;
            } else{
                cout<<0;
            }




        }
        cout<<'\n';
    }
    return 0;
}