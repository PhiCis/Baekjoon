a = input()
b = input()
c = int(b)-int(a)
if c<=0:
    print("Congratulations, you are within the speed limit!")
elif c<=20:
    print("You are speeding and your fine is $100.")
elif c<=30:
    print("You are speeding and your fine is $270.")
else:
    print("You are speeding and your fine is $500.")
