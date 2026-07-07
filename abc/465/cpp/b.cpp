#include <iostream>

using namespace std;

int X, Y, L, R, A, B;

// p o'zgaruvchisiga int tipi berildi
int iv1(int p){
    if ((0 <= p) && (p < L)){
        return 1;
    }
    return 0;
}

int iv2(int p){
    if ((L <= p) && (p <= R)){
        return 1;
    }
    return 0;
}

int iv3(int p){
    if ((R < p) && (p < 24)){
        return 1;
    }
    return 0;
}

int sv(){
    if (iv1(A)){
        if (iv1(B)){
            return (B - A) * Y;
        }
        else if (iv2(B)){
            return (L - A) * Y + (B - L) * X;
        }
        else if (iv3(B)){
            return (L - A) * Y + (R - L) * X + (B - R) * Y;
        }
    }
    else if (iv2(A)){
        if (iv2(B)){
            return (B - A) * X;
        }
        else if (iv3(B)){
            return (R - A) * X + (B - R) * Y;
        }
    }
    else if (iv3(A)){
        return (B - A) * Y;
    }
    return 0; // Har ehtimolga qarshi default qaytaruvchi qiymat
}

int main(){
    // scanf main funksiyasi ichiga ko'chirildi
    // scanf("%d %d %d %d %d %d", &X, &Y, &L, &R, &A, &B);
    cin >> X >> Y >> L >> R >> A >> B; 
    
    // printf to'g'rilandi
    //printf("%d\n", sv());
    cout << sv();
    
    return 0;
}