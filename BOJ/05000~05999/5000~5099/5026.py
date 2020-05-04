for i in range(int(input())):
    s=input()
    if s == 'P=NP':
        print("skipped")
    else:
        print(sum(map(int,s.split('+'))))