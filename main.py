def sv1(nums):
    n = len(nums)
    m = len(nums[0])
    res = [[0] * m for _ in range(n)]
    for i in range(n):
        for j in range(m):
            res[j][n - 1 - i] = nums[i][j]
    return res

def main():
    nums = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    res = sv1(nums)
    print(res)

if __name__ == '__main__':
    main()
