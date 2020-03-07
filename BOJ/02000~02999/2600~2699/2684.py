n = int(input())
L = ["TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"]
for i in range(n):
    a = input()
    cnt = [0]*8
    for j in range(0,len(a)-2):
        for k in range(8):
            if a[j:j+3] == L[k]:
                cnt[k]+=1
    for j in range(8):
        print(cnt[j],end=" ")
    print()