def sv(A, K):
    p = 1
    for e in A:
        x = p * e
        if len(str(x)) >= K + 1:
            p = 1
        else:
            p = x
    return p

def main():
    N, K = map(int, input().split())
    nums = list(map(int, input().split()))
    res = sv(nums, K)
    print(res)

if __name__ == "__main__":
    main()
