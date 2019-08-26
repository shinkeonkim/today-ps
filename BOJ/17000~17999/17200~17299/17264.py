N, P = list(map(int, input().split()))
W, L, G = list(map(int, input().split()))
S = 0
player = dict()

for i in range(P):
    a, b = input().split()
    if b == 'W':
        player[a] = 1
    else:
        player[a] = -1

for i in range(N):
    a = input()
    if a not in player:
        S -= L
    elif player[a] == 1:
        S += W
    else:
        S -= L

    S = min(G, S)
    S = max(0, S)

    if S == G:
        print("I AM NOT IRONMAN!!")
        break
else:
    print("I AM IRONMAN!!")
