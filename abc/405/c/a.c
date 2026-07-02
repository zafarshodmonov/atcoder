#include <stdio.h>

int sv1(int r, int x){

    if (1600 <= r && r <= 2999 && x == 1){
        return 1;
    }
    if (1200 <= r && r <= 2399 && x == 2){
        return 1;
    }
    return 0;
}

int main(void){
    int r, x, n;
    scanf("%d", &r);
    scanf("%d", &x);

    n = sv1(r, x);

    if (n == 1){
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}