def sv1(r: int, x: int) -> str:
    if 1600 <= r <= 2999 and x == 1:
        return 'Yes'
    if 1200 <= r <= 2399 and x == 2:
        return 'Yes'
    return 'No'

def main():
    r, x = map(int, input().split())
    res = sv1(r, x)
    print(res)

if __name__ == "__main__":
    main()
