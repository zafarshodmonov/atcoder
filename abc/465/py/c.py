def sv1(s):
    A = list(range(1, len(s) + 1))
    for i, e in enumerate(s):
        if e == 'o':
            A = A[i::-1] + A[i + 1:]
    return A

import sys
from collections import deque

def sv(s):
    dq = deque()
    is_reversed = False

    # 1 dan N gacha bo'lgan sonlarni tartib bilan ko'rib chiqamiz
    for k, ch in enumerate(s, start=1):
        if not is_reversed:
            dq.append(k)
            if ch == 'o':
                is_reversed = True
        else:
            dq.appendleft(k)
            if ch == 'o':
                is_reversed = False
                
    # Flag holatiga qarab yakuniy natijani qaytaramiz
    if is_reversed:
        return reversed(dq)
    else:
        return dq

def main():
   
        
    n = int(input())
    s = input()
    
    res = sv(s)
    
    # Natijani bitta satrda probellar bilan chiqarish
    print(*(res))

if __name__ == '__main__':
    main()
