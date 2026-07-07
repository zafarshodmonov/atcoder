def main():
    x, y = map(int, input().split())
    
    count = 0
    
    # Barcha 36 xil holatni tekshirib chiqamiz
    for i in range(1, 7):
        for j in range(1, 7):
            if (i + j >= x) or (abs(i - j) >= y):
                count += 1
                
    # Ehtimollikni hisoblash va chop etish
    probability = count / 36.0
    print(f"{probability:.10f}")

if __name__ == '__main__':
    main()