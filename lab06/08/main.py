a = 'hello'

b = a
print(id(a) == id(b))

b = a[:]
print(id(a) == id(b))
