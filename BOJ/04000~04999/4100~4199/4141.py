l = [
  ["2", "ABC"], ["3", "DEF"], ["4", "GHI"], ["5", "JKL"], ["6", "MNO"], ["7", "PQRS"], ["8", "TUV"], ["9", "WXYZ"]
]

n = int(input())
for i in range(n):
    s = input().upper()
    ans = ""
    
    for j in s:
        for k in l:
            if j in k[1]:
                ans += k[0]
    
    print("YES" if ans == ans[::-1] else "NO")
