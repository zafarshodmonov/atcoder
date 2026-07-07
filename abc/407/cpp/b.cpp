#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    int count = 0;
    
    // Barcha 36 xil holatni tekshirib chiqamiz
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if ((i + j >= x) || (abs(i - j) >= y)) {
                count++;
            }
        }
    }
    
    // Ehtimollikni hisoblash (double toifasida)
    double probability = (double)count / 36.0;
    
    // Natijani yetarlicha aniqlikda (10 ta xona) chop etish
    cout << fixed << setprecision(10) << probability << endl;
    
    return 0;
}