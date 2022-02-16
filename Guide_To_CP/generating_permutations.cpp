//Created by: Venkata Ramana

//recursion is simply beautiful and elegant. 

#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define for(i,a,b) for(int i = a; i <= b; i++)
#define vi vector<int>
using namespace std;
 
vi permutation; 
bool truth = false; 

void search(int, bool []);
bool beautiful_check(vi, int);

int main(int argc, char *argv[]){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    scanf("%d",&n);
    bool chosen[n+1] = {false};
    search(n, chosen);
    if (truth = true) printf("NO SOLUTION\n");
}

void search(int n, bool chosen[]){
    if ((int) permutation.size() == n){  
        if (!beautiful_check(permutation, n)){
            for (i, 0, n - 1){
                printf("%d ", permutation[i]); 
            }
            printf("\n");
            truth = true; 
            exit(0);
        }
    }
    else {
        for (i, 1, n){
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search(n, chosen); 
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

bool beautiful_check(vi p, int n){
    bool flag = false; 
    for (i, 0, n-2) {
        if (abs(p[i+1]-p[i]) == 1)
        return true;
    }
    return false;
}