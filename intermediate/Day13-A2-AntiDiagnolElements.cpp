#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > diagonal(vector<vector<int> > &A) {
    int N=A.size(),k=0;
    vector<vector<int>> ans(2*N-1);
    vector<int> vec(N,0);
    for (int m = 0; m < N; m++)
    {
        int i = 0, j = m, temp;
        while (i < N && j >= 0)
        {
            temp = A[i][j];
            vec.push_back(temp);
            //cout << temp;
            i++;
            j--;
        }
        vec.resize(N,0);
        ans.push_back(vec);
        //cout << vec;
        k++;
        cout << ",";
    }
    for (int n = 1; n < N; n++)
    {
        int i = n, j = N - 1, temp;
        while (i < N && j >= 0)
        {
            temp = A[i][j];
            vec.push_back(temp);
            //cout << temp;
            i++;
            j--;
        }
        vec.resize(N,0);
        ans.push_back(vec);
        //cout << vec;
        k++;
        cout << ",";
    }
    cout <<"k is"<< k;
    return ans; 
}


int  main(){
    vector<vector<int> > A{{1,2,3},{4,5,6},{7,8,9}};
    //vector<vector<int>> B{{6},{7},{3},{8},{1},{2}};
    diagonal(A);

   cout << 1;
}