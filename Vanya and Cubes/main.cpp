#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/problemset/problem/492/A
 * A. Vanya and Cubes
 * By : Youssef Mohamed (MegumiinUwU)
 */






using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

ll jojo=0,cube,height=0;
cin>>cube;
if(cube == 1){
    height=1;

}
else{
    for (int i = 1; i <cube ; ++i) {
        jojo=jojo+i;

        cube=cube-jojo;

        if (cube<0){
            break;

        }
        height+=1;



    }
}



cout<<height;

    return 0;
}
