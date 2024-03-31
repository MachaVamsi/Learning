#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
#include <bits/stdc++.h>

int solvep(vector<int> &A) {
    int x, N=A.size(),a,b,chek;
    sort(A.begin(), A.end());
    x=abs(A[1]-A[0]);
    for (int i=1; i< N-1; i++){
        chek=abs(A[i]-A[i+1]);
        if (chek!=x){return 0;}
    } 
    return 1;
}

int main(){
    //vector<int> A{-251,-305,-323,-53,-215,-143,-107,-161,-179,-431,-449,-17,-341,-413,-35,-125,-197,-377,-269,-71,-359,-89,-233,-287,-395};
    vector<int> A{2,4,1};
    cout << solvep(A);
}
