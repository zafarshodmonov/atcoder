#include <iostream>

int sv1(int a, int b){
    return (a + b / 2) / b;
}

int sv(int a, int b) {
    int asos = a / b;
    int qd = a % b;
    float ks = (float)qd / b; // Shu yerdagi o'zgarish
    
    if (ks > 0.5) {
        return asos + 1;
    }
    else {
        // b toq son bo'lgani uchun ks == 0.5 holati bo'lmaydi
        return asos;
    }
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << sv1(a, b);
    return 0;
}