#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int solvep(vector<int> &A) {
    int N= A.size(), leftsum, rightsum, cnt=0, minI;
    vector<int> pfA(N);
    minI=N+1;
    pfA[0]=A[0];
    for (int i=1; i<N; i++){
        pfA[i]=pfA[i-1]+A[i];
    }
    
    for (int i=0; i<N; i++){
        
        if(i==0){leftsum=0;rightsum=pfA[N-1]-pfA[0];}
        else if(i==N-1){leftsum=pfA[N-2];rightsum=0;}
        else {leftsum=pfA[i-1]; rightsum=pfA[N-1]-pfA[i];}
        if (leftsum==rightsum){
            cnt=cnt+1;minI=min(i,minI);
            }
    }
    if(cnt=0){return -1;}
    else {return minI;}
}

int main(){
    vector<int> A{1,2,3,7,1,2,3};
    cout << solvep(A);
}
