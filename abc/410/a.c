#include <stdio.h>

int sv1(int r, int x){
    // Zanjirli shartlar to'g'rilandi
    if ((1600 <= r && r <= 2999) && x == 1) {
        return 1;
    }
    if ((1200 <= r && r <= 2399) && x == 2) {
        return 1;
    }
    return 0;
}

int main(){
    int r, x;

    // Scanf format spetsifikatori qo'shildi
    scanf("%d", &r);
    scanf("%d", &x);
    
    int res = sv1(r, x);
    
    if (res == 1) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}