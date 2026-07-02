def sv(a: int, b: int) -> int:
    asos = a // b
    qoldiq = a % b
    kasr = qoldiq / b
    
    if kasr > 0.5:
        return asos + 1
    else:  # kasr < 0.5 bo'lgan barcha holatlar uchun (0.5 bo'lishi mumkin emas)
        return asos

def main():
    a, b = map(int, input().split())
    res = sv(a, b)
    print(res)

if __name__ == '__main__':
    main()