def sv3(M: int, A: list[int]) -> int:
    visited = [True] + [False] * M
    unique_count = 0
    for i, e in enumerate(A):
        if not visited[e]:
            visited[e] = True
            unique_count += 1
        if unique_count == M:
            return len(A) - i
    return 0

def sv2(M: int, A: list[int]) -> int:
    set1 = set()
    for i, e in enumerate(A):
        set1.add(e)
        if len(set1) == M:
            return len(A) - i
    return 0

def sv1(M: int, A: list[int]) -> int:
    B = [1] + [0] * M 
    for i, e in enumerate(A):
        B[e] += 1
        if B.count(0) == 0:
            return len(A) - i
    return 0

def main():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    res = sv3(M, A)
    print(res)

if  __name__ == '__main__':
    main()
