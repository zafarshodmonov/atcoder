#include <iostream>
#include <vector>
#include <set>

// sv2 funksiyasining C++ dagi varianti
int sv2(int M, const std::vector<int>& A) {
    std::set<int> set1;
    
    for (size_t i = 0; i < A.size(); ++i) {
        set1.insert(A[i]); // Elementni set'ga qo'shamiz
        
        // Agar set ichidagi unikal elementlar soni M ga yetsa
        if (set1.size() == M) {
            return A.size() - i;
        }
    }
    return 0;
}

int main() {
    // Tezkor kiritish/chiqarish (I/O) operatsiyalari uchun
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, M;
    if (std::cin >> N >> M) {
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        // Natijani hisoblash va ekranga chiqarish
        int res = sv2(M, A);
        std::cout << res << "\n";
    }

    return 0;
}