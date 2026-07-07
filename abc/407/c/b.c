#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    
    // Ma'lumotlarni o'qish
    scanf("%d %d", &x, &y);
    
    int count = 0;
    
    // 36 xil holatni bittalab tekshirish
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            // Mantiqiy operatorlar (||, >=) Python'dagi (or, >=) kabi ishlaydi
            if ((i + j >= x) || (abs(i - j) >= y)) {
                count++;
            }
        }
    }
    
    // Ehtimollikni hisoblash
    double probability = (double)count / 36.0;
    
    // Natijani 10 ta kasr xonasi aniqligida chop etish
    printf("%.10f\n", probability);
    
    return 0;
}