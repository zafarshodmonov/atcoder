def sv1(r, x):
    if 1600 <= r <= 2999 and x == 1:
        return True
    if 1200 <= r <= 2399 and x == 2:
        return True
    return False

def main():
    r, x = map(int, input().split())
    res = sv1(r, x)
    print('Yes' if res else 'No')

if __name__ == "__main__":
    main()
