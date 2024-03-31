// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

class Prime { 
    // Access specifier 
public: 
    // Data  Members 
    vector<int> primelist; 
    // Member Functions() 
    bool isPrime(int N){
        bool ch = true;
        if (N<=1){
            return false;
        }
        for(int i=2; i*i<=N; i++){
            if (N%i==0){
                ch = false;
            }
        }
        return ch;
    } 
    
    vector<int> prime_range(int s, int e){
        for (int i=s; i<=e; i++){
            if (isPrime(i)==true){primelist.push_back(i);}
        }
        return primelist;
    }

    vector<int> prime_numbers(int *arr, int e){
         for (int i=0; i<e; i++){
            if (isPrime(arr[i])==true){primelist.push_back(arr[i]);}
        }
        return primelist;

    }

}; 
    

int main() {
    // Write C++ code here
    std::cout << "Hello, World!" << std::endl;
    int A[] ={11,56,23,13,21,71,97};
    Prime obj1; 
    vector <int> vec;
    vector <int> res;
      
    // call printname() 
    vec=obj1.prime_numbers(A, sizeof(A)/sizeof(A[0])); 
    res=obj1.prime_range(100, 200);
    for (auto elem : vec) {
        cout << elem << ' ';
    }
 
    cout << endl;

    for (auto elem : res) {
        cout << elem << ' ';
    }
    

    return 0;
}