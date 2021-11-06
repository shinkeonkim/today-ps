def get_total(info):
  return info[0] * (100 + info[1]) * (100 * (100 - min(info[2], 100)) + min(info[2], 100) * info[3]) * (100 + info[4])

def get_answer(before, after):
  return "+" if before < after else ("-" if before > after else "0")

current = [[*map(int,input().split())] for _ in range(2)]
weapon = [[*map(int,input().split())] for _ in range(2)]

a_before = get_total(current[0])
b_before = get_total(current[1])

for i in range(2):
  for j in range(5):
    current[i][j] += weapon[1-i][j] - weapon[i][j]

a_after = get_total(current[0])
b_after = get_total(current[1])

print(get_answer(a_before, a_after))
print(get_answer(b_before, b_after))
