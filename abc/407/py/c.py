def hp(s):
    res = []
    res.append(s + '0')
    s1 = ''
    m = {'0': '1', '1': '2', '2': '3', '3': '4',
         '4': '5', '5': '6', '6': '7', '7': '8',
         '8':'9', '9': '0'}
    for c in s:
        s1 += m[c]
    res.append(s1)
    return res

def sv(s):
    l1 = ['0']
    cnt = 1
    while True:
        l2 = []
        for e in l1:
            l2.extend(hp(e))
        if s in l2:
            return cnt + 1
        l1 = l2
        cnt += 1

def main():
    s = input()
    res = sv(s)
    print(res)


if __name__ == '__main__':
    main()
