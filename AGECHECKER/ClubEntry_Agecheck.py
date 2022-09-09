def get_age():
    while True:
        Age = input("Enter amount: ")
        try:
            checker = int(Age)
            if checker >= 21 :
                print("Access Granted! Welcome to TEDDY BOY CLUB")
                break
            else:
                print("Access Denied! Underage and go watch POGO")
        except ValueError:
            print("Input must be a number, try again")
    return checker
get_age()
