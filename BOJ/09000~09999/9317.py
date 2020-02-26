import math

while True:
    D,Rh,Rv = map(float,input().split())
    if D == Rh == Rv == 0:
        break
    W = 16*D/(math.sqrt(337))
    H = 9*W/16

    print("Horizontal DPI: %.2f" % (Rh/W))
    print("Vertical DPI: %.2f" % (Rv/H))
