#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > solve(vector<vector<int> > &A, vector<vector<int> > &B) {
    
    int N = A.size(), temp;
    vector<vector<int>> summ(N);
    for (int i=0; i<N; i++){
        int M=A[i].size();
        for (int j=0; j<M; j++){
            temp=A[i][j]+B[i][j];
            summ[i].push_back(temp);
            }
    }
    return summ;
}


int  main(){
    vector<vector<int> > A{{6},{2},{3},{10},{1},{3}};
    vector<vector<int>> B{{6},{7},{3},{8},{1},{2}};
    solve(A,B);

   cout << 1;
}