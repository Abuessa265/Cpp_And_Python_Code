import random
mynum = random.randint(0,9)  # computer guess number
print("I have a number in my mind , Can you Guess it?")

while True:
    userNum = int(input("Enter your Guess :"))
    if userNum == mynum:
        print("Yes You are right")
        break
    elif userNum > mynum:
        print("User number is greater than the number you entered \ntry again")

    else:
        print("User number is less than the number you entered \n try again")
