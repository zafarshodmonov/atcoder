#include <stdio.h>

int sv(int a, int b) {
    return (a + b / 2) / b;
}

int main() {
    int a, b;
    
    // Ma'lumotlarni o'qib olish (C uslubida)
    scanf("%d %d", &a, &b);
    
    // Natijani ekranga chiqarish
    printf("%d\n", sv(a, b));
    
    return 0;
}