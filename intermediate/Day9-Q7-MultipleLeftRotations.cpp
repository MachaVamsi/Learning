#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> solve(vector<int> &A, vector<int> &B) {
    int N=A.size(), M=B.size();
    vector<vector<int>> ans(M,vector<int> (N,0));
    for (int q=0; q<M;q++){
        int x=B[q]%N;
        for (int i=0; i<N;i++){
            int j= (i+x)%N;
            ans[q][i]=A[j];
        }

    }
    return ans;
}


int  main(){
    vector<int> A{5,17,100,11,7, 54};
    vector<int> B{4};
    vector<vector<int>> anss;
    anss=solve(A,B);
    for (int i=0; i<anss.size();i++){
        for (int j=0; j<anss[0].size();j++){
            cout <<anss[i][j];
        }
    }
//    cout << 1;
}