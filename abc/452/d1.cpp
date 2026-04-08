//#include <stdio.h>
#include <iostream>

using namespace std;

void f(int h, int w){
    // printf("%d %d", h, w);
    for (int i=0; i < h; i++){
        for (int j=0; j < w; j++) {
            if (i==0 || i == h-1 || j == 0 || j == w - 1) {
                //printf("#");
                cout << "#";
            } else {
                //printf(".");
                cout << ".";
            }
        }
        //printf("\n");
        cout << "\n";
    }
}

int main(){
    int h, w;
    // scanf("%d %d", &h, &w);
    cin >> h >> w;
    f(h, w);
    return 0;
}

