def reverse(s):
    reversed = ''
    i = len(s) - 1  
    while i >= 0:
        reversed += s[i]
        i -= 1  
    return reversed


a= input("enter your string")

result = reverse(a)
print("Reversed string:", result)
