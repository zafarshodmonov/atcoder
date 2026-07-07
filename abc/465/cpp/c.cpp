#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

deque<int> sv(int n, string s){
    deque<int>dq;
    bool is_reversed = false;

    for (int k = 1; k <= n; k++){
        char ch = s[k - 1];
        if (! is_reversed){
            dq.push_back(k);
            if (ch == 'o'){
                is_reversed = true;
            }
        }
        else {
            dq.push_front(k);
            if (ch == 'o'){
                is_reversed = false;
            }
        }
    } 
    
    if (is_reversed){
        reverse(dq.begin(), dq.end());
        return dq;

    }
    else {
        return dq;
    }
}

int main(){
    // Tezkor kiritish/chiqarish
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<int> dq;
    dq = sv(n, s);

    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << (it + 1 == dq.end() ? "" : " ");
    }
    return 0;
}