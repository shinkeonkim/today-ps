z=2400
n=int(input())
print("%02d in Ottawa\n%02d in Victoria\n%02d in Edmonton\n%02d in Winnipeg\n%02d in Toronto\n%02d in Halifax\n%02d in St. John's"%(n,(n+2100)%z,(n+2200)%z,(n+2300)%z,n,(n+100)%z,((n+100+(100*((n%100+30)//60)))//100*100+((n%100+30)%60))%z,))
