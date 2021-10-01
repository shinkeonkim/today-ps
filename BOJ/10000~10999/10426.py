from datetime import date,timedelta
a,b=input().split()
print(date(*map(int,a.split('-')))+timedelta(int(b)-1))
