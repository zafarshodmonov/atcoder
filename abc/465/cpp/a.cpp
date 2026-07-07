#include <iostream>

using namespace std;

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
    // scanf("%d %d", &a, &b);
    cin >> a >> b;
    if (sv(a, b)){
        //printf("Yes");
        cout << "Yes";
    }
    else {
        //printf("No");
        cout << "No";
    }
    return 0;
}