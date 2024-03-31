#include <iostream>
#include <vector>
using namespace std;


int majorityElement(const vector<int> &A) {
    int n=A.size(), majindex=0, freq=1;
    // vector<int> B(n);
    // for (int i=0; i<n;i++){
    //     B[i]=A[i];
    // }
    // sort(B.begin(, B.end()));
    for (int i=1; i<n; i++){
        if(A[i]!=A[majindex]){
            freq=freq-1;
            if (freq==0){
                majindex=i;
                freq=1;
            }
        }
        else if(A[i]==A[majindex]){
            freq+=1;
            //majindex=i;
        }
    }
    return A[majindex];
}

int  main(){
    vector<int> A{2,2,1,1,1};
    int anss;
    anss=majorityElement(A);
    
   cout << anss;
}
