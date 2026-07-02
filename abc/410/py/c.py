def sv1(A):
    # A = [4, 2, 3]
    s = A[0] * A[1]  # s = 8
    n = len(A)  # n = 3
    t1 = A[0]  # t1 = 4
    t2 = A[1]  # t2 = 2
    for j in range(2, n):  # j = 1, 2
        s += (t1 + t2) * A[j]
        t1 += t2
        t2 = A[j]

    return s

def main():
    N = int(input())
    A = list(map(int, input().split()))
    res = sv1(A)
    print(res)

if __name__ == '__main__':
    main()
