#include <iostream>

using namespace std;

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

    
    cin >> r >> x;
    
    int res = sv1(r, x);
    
    if (res == 1) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}