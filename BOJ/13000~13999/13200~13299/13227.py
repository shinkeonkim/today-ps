l = [input() for i in range(3)]

chk = (l[0][0] == l[1][1] == l[2][2] and l[2][2] != '.') or (l[0][2] == l[1][1] == l[2][0] and l[0][2] != '.')
for i in range(3):
  chk = chk or (l[0][i] == l[1][i] == l[2][i] and l[0][i] != '.') or (l[i][0] == l[i][1] == l[i][2] and l[i][2] != '.')

print("YES" if chk else "NO")
