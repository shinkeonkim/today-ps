def main():
  l = [*map(int,input().split())]

  for i in range(9):
    if l[i] > ((i//2)+1)*100:
      return "hacker"
  if sum(l) < 100:
    return "none"
  return "draw"

print(main())