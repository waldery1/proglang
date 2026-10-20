value = 1
alphabet = "abcdefghijklmnopqrstuvwxyz"

for letter in alphabet:
    for num in range(100):
        name = f"{letter}{num}"
        
        globals()[name] = value
        value += 1

print(a0) 
print(z99)
