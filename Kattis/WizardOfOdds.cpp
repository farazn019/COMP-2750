
#This function contains the solution to the Wizard Of Odds problem.
def wizardOfOdds():
    #The user is asked to input the values for N and K.
    N,K = input().split()
    #N is converted to an integer.
    N = int(N)
    #K is converted to an integer.
    K = int(K)
    
    if 2**K >= N: #If 2 to the exponent K is greater than or equal to N, then a message will be printed to the user saying their wish is granted.
        print("Your wish is granted!")
    else: #If 2 to the exponent K is not greater than or equal to N, then a message will be printed saying that they are a flying monkey.
        print("You will become a flying monkey!")

wizardOfOdds() #The function is called here.
