def f(s: str, n: int) -> str:
    return s[n:-n]

def f1(s: str, n: int) -> str:
    res = ''
    for i in range(n, len(s)-n):
        res += s[i]
    return res

def main():
    s = input()
    n = int(input())
    print(f1(s, n))


if __name__ == '__main__':
    main()