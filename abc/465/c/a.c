#include <stdio.h>

int sv(int a, int b){
    float x = b * 2 / 3;
    if (a > x){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (sv(a, b)){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}