def decToRoman(numStr):
    n = int(numStr)
    
    if n>= 4000 or n==0 :
        raise ValueError
        return
    
    romans = [
        (1000, 'M'), (900, 'CM'), (500, 'D'), (400, 'CD'),
         (100, 'C'),  (90, 'XC'),  (50, 'L'),  (40, 'XL'),
          (10, 'X'),   (9, 'IX'),   (5, 'V'),   (4, 'IV'),
           (1, 'I')
    ]

    result = ''
    for value, letters in romans:
        while n >= value:
            result += letters
            n -= value
    
    return result

def romanToDec(numStr):
    decNum = 0
    n = numStr
    romans = [
        (1000, 'M'), (900, 'CM'), (500, 'D'), (400, 'CD'),
         (100, 'C'),  (90, 'XC'),  (50, 'L'),  (40, 'XL'),
          (10, 'X'),   (9, 'IX'),   (5, 'V'),   (4, 'IV'),
           (1, 'I')
    ]

    L = []
    for i in n:
        for value, letter in romans:
            if i == letter:
                L.append(value)
    L.append(0)
    for i in range(len(n)):
        if L[i] >= L[i+1]:
            decNum = decNum + L[i]
        else:
            decNum = decNum - L[i]

    return decNum


a=input()
b=input()
ret = romanToDec(a)+romanToDec(b)
print(ret)
print(decToRoman(str(ret)))