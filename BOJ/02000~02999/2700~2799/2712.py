d1 = {"kg": 2.2046,"lb":0.4536, "l":0.2642, "g":3.7854}
d2 = {"kg": "lb","lb":"kg", "l":"g", "g":"l"}
for i in range(int(input())):
    a,b=input().split()
    a= float(a)
    print("%.4f %s" %(a*d1[b],d2[b]))
