//Created by: Venkata Ramana

//recursion is sexy!

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define for(i,a,b) for(int i = a; i <= b; i++)
#define vi vector<int>
using namespace std;

vi subset; 

void search(int, int);

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    scanf("%d", &n);
    search(1, n);
}

void search(int k, int n){
    if (k == n + 1){
        //process subset
        for (i, 0, (int)(subset.size()) - 1){
            printf("%d\t", subset[i]);
        }
        printf("\n");
    }    
    else {
        //include k in the subset
        subset.push_back(k);
        search(k+1, n);
        subset.pop_back();
        //don't include k in the subset
        search(k+1, n);
    }
}