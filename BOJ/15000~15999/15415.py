from operator import *

W = int(input())
print(sum([mul(*map(int, input().split())) for _ in int(input()) * "-"]) // W)
