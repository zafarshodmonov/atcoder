X, Y, L, R, A, B = map(int, input().split())

def iv1(p):
    return 0 <= p < L

def iv2(p):
    return L <= p <= R

def iv3(p):
    return R < p < 24

def sv():
    if iv1(A):
        if iv1(B):
            return (B - A) * Y
        elif iv2(B):
            return (L - A) * Y + (B - L) * X
        elif iv3(B):
            return (L - A) * Y + (R - L) * X + (B - R) * Y
        else:
            pass
    elif iv2(A):
        if iv2(B):
            return (B - A) * X
        elif iv3(B):
            return (R - A) * X + (B - R) * Y
        else:
            pass
        pass
    elif iv3(A):
        return (B - A) * Y
    else:
        pass

def main():
    res = sv()
    print(res)

if __name__ == "__main__":
    main()
