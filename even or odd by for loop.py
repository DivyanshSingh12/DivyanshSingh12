n=int(input("enter any number:"))
for n in range(n%2==0):
    print("It is even")
    break
else:
     print("It is odd")
