import random
import time

money = 1000

number = [2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 31, 33, 35, 1, 3, 5, 7, 9, 21, 23, 25, 27, 30, 32, 34, 36, 0]
color = ["black", "red"]
oddoreven = ["odd", "even"]
colorchoice = (random.choice(color))
oddorevenchoice = (random.choice(oddoreven))
numberchoice = (random.choice(number))

def moneycheck():
    if money == 0:
        print("You dont have no money to play ya loser!")
        exit()
    else:
        print("Your balance: $" + str(money))
        print("You're losing money you bum..")


print("You have $1000 in your pocket. ")
bet = int(input("how much would you like to bet? "))
guesscolor = input("Round 1 : Do you want to bet red or black? ")
if guesscolor == colorchoice:
    print("Rolling..")
    time.sleep(2)
    print("Rolled: " + colorchoice)
    print("Your bet: " + guesscolor)
    print("Betcha right!")
    money = money + bet
    moneycheck()
    print("Your balance: $" + str(money))
else :
    print("Rolling..")
    time.sleep(2)
    print("Rolled: " + colorchoice)
    print("Your bet: " + guesscolor)
    money = money - bet
    moneycheck()

print("  ")
time.sleep(2)

betodd = int(input("how much would you like to bet? "))
guessoddoreven = input("Round 2 : Do you bet odd or even? ")
if guessoddoreven == oddorevenchoice:
    print("Rolling..")
    time.sleep(2)
    print("Rolled: " + oddorevenchoice)
    print("Your bet: " + guessoddoreven)
    money = money + betodd
    moneycheck()
    print("Your balance: $" + str(money))
    print("Betcha right!")
else:
    print("Rolling..")
    time.sleep(2)
    print("Rolled: " + oddorevenchoice)
    print("Your bet: " + guessoddoreven)
    money = money - betodd
    moneycheck()

print("  ")
time.sleep(2)

betnum = int(input("how much would you like to bet? "))
guessnumber = input("Round 3: Pick a number between 0 and 37. ")
if guessnumber == numberchoice:
    print("Rolling..")
    time.sleep(2)
    print("Rolled: " + str(numberchoice))
    print("Your bet: " + str(guessnumber))
    money = money + betnum
    moneycheck()
    print("Your balance: $" + str(money))
    print("Betcha right!")
else:
    print("Rolling..")
    time.sleep(2)
    print("Rolled: " + str(numberchoice))
    print("Your bet: " + str(guessnumber))
    money = money - betnum
    moneycheck()

print("  ")
time.sleep(2)
