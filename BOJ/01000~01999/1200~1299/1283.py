n = int(input())
s = []
ans = []

key = set()

for i in range(n):
  s.append(input())

for i in range(n):
  words = s[i].split(' ')
  ans_key = None

  for j in range(len(words)):
    word = words[j]

    if len(word) > 0:
      if word[0].lower() not in key and word[0] != ' ':
        ans_word_idx = j
        key.add(word[0].lower())
        words[j] = '['+word[0]+']' + word[1:]

        ans.append(' '.join(words))
        break
  else:
    for k in s[i]:
      if k.lower() not in key and k != ' ':
        ans_key = k
        break
    if ans_key == None:
      ans.append(-1)
    else:
      key.add(ans_key.lower())
      idx = s[i].index(ans_key)
      ans.append(s[i][:(idx-1)]+'['+s[i][idx]+']'+s[i][(idx+1):])

for i in ans:
  print(i)
