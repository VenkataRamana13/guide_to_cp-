//Created by: Venkata Ramana

#include <bits/stdc++.h>
//#define for(i,a,b) for(int i = a; i <= b; i++)
using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x = 10; 

    for (int k = 31; k >= 0; k--){
        if (x &(1 << k)) printf ("1\n");
        else printf ("0\n"); 
    }
}