from math import sqrt
# ac + bd = sqrt(b^2-a^2) * sqrt(b^2-c^2) 
# b(b^2-a^2-c^2-d^2) = 2acd

def solution(L):
  for i in range(1, L[0]):
    L2 = [*L, i]

    b,a,c,d = L2

    if b*(b*b-a*a-c*c-d*d) == 2*a*c*d:
      return i
  else:
    return -1


L = [*map(int,input().split())]
print(solution(L))
