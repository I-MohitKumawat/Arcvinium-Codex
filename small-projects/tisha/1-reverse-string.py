def reverse(k):
    reversed = ''
    i = len(k) - 1  
    while i >= 0:
        reversed += k[i]
        i -= 1  
    return reversed


a= input("enter the string")

result = reverse(a)
print("Reversed string:", result)
