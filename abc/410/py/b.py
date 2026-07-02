def sv4(m, nums):
    n = len(nums)
    left, right = 0, n
    ans = 0
    
    while left <= right:
        mid = (left + right) // 2
        # agar mid ta elementni kesib tashlaganimizda to'plam to'liq bo'lmasa
        if len(set(nums[:n - mid])) < m:
            ans = mid
            right = mid - 1 # Yana ham kamroq kesish mumkinligini tekshiramiz
        else:
            left = mid + 1  # Ko'proq kesish kerak ekan
            
    return ans

def sv3(m, nums):
    first_pos = {}
    for i, e in enumerate(nums):
        if e not in first_pos:
            first_pos[e] = i
            
    # Agar 1 dan M gacha sonlardan qaysidir biri umuman yo'q bo'lsa
    if len(first_pos) < m:
        return 0
        
    # Barcha sonlar qatnashishi uchun kerak bo'ladigan eng oxirgi indeks
    last_needed_index = max(first_pos.values())
    
    return len(nums) - last_needed_index

def sv2(m, nums):
    seen = set()
    for i, e in enumerate(nums):
        seen.add(e)               # set faqat takrorlanmas qiymatlarni saqlaydi
        if len(seen) == m:        # m ta turli xil element yig'ilsa
            return len(nums) - i  # darhol javobni qaytaramiz
    return 0

def sv1(m, nums):
    res = [1] + [0] * m 
    for i, e in enumerate(nums):
        res[e] += 1
        if res.count(0) == 0:
            return len(nums) - i 
    return 0

def main():
    n, m = map(int, input().split())
    nums = list(map(int, input().split()))
    res = sv4(m, nums)
    print(res)

if __name__ == '__main__':
    main()
