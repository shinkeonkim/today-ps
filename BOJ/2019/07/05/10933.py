import hashlib
h = hashlib.new('ripemd160')
a=input()
h.update(a.encode('utf-8'))
print(h.hexdigest())