n = int(input())
k = int(input())

sensors = sorted(list([*map(int,input().split())]))

diffs = sorted([sensors[i] - sensors[i-1] for i in range(1,len(sensors))])

print(sum(diffs[:(len(diffs) if k == 1 else 1 - k)]))
