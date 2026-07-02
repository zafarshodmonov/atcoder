#include <iostream>
#include <vector>
#include <string>

using namespace std;

unsigned long long sv(vector<unsigned long long> A, int K){
    unsigned long long p = 1;

    unsigned long long limit = 1;
    for (int i = 0; i < K; i++)
        limit *= 10;

    for (auto e : A){
        if (p > (limit - 1) / e){
            p = 1;
        }
        else{
            p *= e;
        }
    }

    return p;
}

int main(){
    int N, K;
    cin >> N >> K;

    vector<unsigned long long> A;
    while (N--){
        unsigned long long x;
        cin >> x;
        A.push_back(x);
    }

    cout << sv(A, K);

    return 0;
}