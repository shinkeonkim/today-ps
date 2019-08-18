k=input()
c1 = (ord(k) - ord('가'))//588
c2 = ((ord(k) - ord('가')) - (588*c1)) // 28
c3 = (ord(k) - ord('가')) - (588*c1) - 28*c2
print(c1*588+c2*28+c3+1)