L = list(map(int,input().split()))
a = int(input())
L.sort(reverse= True)
k = -1
for i in range(len(L)):
    if L[i] == a:
        k = i+1
D = [[1,5,'A+'],[6,15,'A0'],[16,30,'B+'],[31,35,'B0'],[36,45,'C+'],[46,48,'C0'],[49,50,'F']]
for i in D:
    if i[0] <= k <= i[1]:
        print(i[2])
        break