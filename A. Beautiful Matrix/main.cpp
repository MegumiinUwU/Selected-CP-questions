#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/problemset/problem/263/A
 * A. Beautiful Matrix
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int jojo[5][5];
int x,y,steps=0;

    for (int i = 0; i <5 ; ++i) {
        for (int j = 0; j <5 ; ++j) {

            cin>>jojo[i][j];
            if(jojo[i][j] == 1){
                x= i;
                y = j;
            }

        }
    }



        if(jojo[2][2] == 1){
            steps = 0;
        }
        else{
            if(x>=2){
                steps= steps+(x-2);
            } else if(x<2){
                steps= steps+(2-x);

            }

            if(y>=2){
                steps= steps+(y-2);
            }else if(y<2){
                steps= steps+(2-y);

            }



    }

    cout<<steps;



    return 0;
}
