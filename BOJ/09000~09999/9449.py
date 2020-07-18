W, H, w, h = map(float,input().split())
cnt1 = 0
cnt2 = 0
while W > 0:
    W -= w
    if W >= 0:
        cnt1+=1
    W -= (w-0.000001)
while H > 0:
    H -= h
    if H >= 0:
        cnt2 +=1
    H -= (h-0.000001)
print(cnt1*cnt2)