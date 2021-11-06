l = [input() for _ in range(int(input()))]
ll = max([len(i) for i in l])
print(max(max([*map(int, l)]), int('1'+ '0'* (ll-1))) )
print(ll*'9')