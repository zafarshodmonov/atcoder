def solve(H, W):

    for i in range(H):
        row = []

        for j in range(W):
            cnt = 0

            if i > 0:
                cnt += 1      # yuqori

            if i < H - 1:
                cnt += 1      # pastki

            if j > 0:
                cnt += 1      # chap

            if j < W - 1:
                cnt += 1      # o‘ng

            row.append(str(cnt))

        print(*row)

def main():
    h, w = map(int, input().split())
    solve(h, w)

if __name__ == '__main__':
    main()
