import time

print("you have been imprisioned for a crime you did not commit.")
print("Your goal is to successfully break out without getting caught.")

def option1():
    bribe = input("Do you want to bribe Bob the prision guard?")
    if bribe == "yes":
        print("He doesn't want to accept your bribe.")
        time.sleep(3)
        attack = input("type 'me' to attack Bob yourself. Type 'John' to have your cell mate attack him.")
        print("Bob fights back.")
        time.sleep(3)
        final = input("press k to kill Bob or g to give up ")
        if final == "k":
            print("You did it! now run before someone finds you! CONGRATS")
        else:
            print("You have failed to kill him")
            print("GAME OVER!:(")

    else:
        print ("Then go pick the lock.")
        time.sleep(3)
        print("You did it!")
        lock = input("press m to have John (your cell mate) watch for your back or press r to just wing it")
        if lock == "m":
            print("SHOCKER : John has betrayed you and tried to flee by himself!!")
            time.sleep(3)
            choice = input("press t to get out together so that you have another person there with you or press k to kill John")
            if choice == "t":
                print("John helps you climb over the fence and you leave him behind")
                time.sleep(3)
                print("you've made it now run for your life and pray that John never finds you again.")
            else :
                print("Youve killed John and you try to escape but the alarm goes off while you try to climb the fence.")
                print("GAMEOVER! THEY'RE COMING FOR YOU.")
        else:
            print("Good Job! You got out.")
            time.sleep(3)
            success = input("press h to hitchhike or press r to run as far as possible")
            if success == "h":
                print("You've made it safely! CONGRATS!")
            else:
                print("As you were running across a highway and a cop car came full speed at you...")
                time.sleep(2)
                print("RIP GAMEOVER")

option1()
