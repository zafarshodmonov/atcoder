#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// sv2 funksiyasining C tilidagi varianti
int sv2(int M, int N, int A[]) {
    // Elementlarni tekshirib turish uchun dinamik "visited" massivi
    // Maksimal element qiymatini topish yoki masaladagi M ga qarab o'lcham olish kerak.
    // Biz bu yerda elementlar qiymati M dan oshmaydi deb hisoblaymiz (Pythondagi sv1 mantiqiga o'xshash)
    bool* visited = (bool*)calloc(M + 1, sizeof(bool));
    
    int unique_count = 0;

    for (int i = 0; i < N; i++) {
        int element = A[i];
        
        // Agar bu elementni birinchi marta ko'rayotgan bo'lsak
        if (!visited[element]) {
            visited[element] = true;
            unique_count++; // Unikal elementlar sonini oshiramiz
        }
        
        // Agar unikal elementlar soni M ga yetsa
        if (unique_count == M) {
            free(visited); // Xotirani bo'shatamiz
            return N - i;
        }
    }

    free(visited); // Xotirani bo'shatamiz
    return 0;
}

int main() {
    int N, M;
    
    // N va M ni o'qib olamiz
    if (scanf("%d %d", &N, &M) != 2) return 0;

    // Dinamik massiv yaratamiz
    int* A = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Natijani hisoblaymiz
    int res = sv2(M, N, A);
    printf("%d\n", res);

    // Ajratilgan xotiralarni tozalaymiz
    free(A);

    return 0;
}