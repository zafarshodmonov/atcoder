
def f(h, w):
    grid = [['.'] * w for i in range(h)]
    for i in range(h):
        for j in range(w):
            if i == 0 or j == 0 or (i == h -1) or (j == w - 1):
                grid[i][j] = '#'
    return grid

def main():
    h, w = map(int, input().split())
    # print(h, w)
    grid = f(h, w)
    for row in grid:
        for col in row:
            print(col, end='')
        print()


if __name__ == '__main__':
    main()
