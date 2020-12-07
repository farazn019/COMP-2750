

#This function contains the solution
def main():
    #Asks the user for the date.
    date = input()
    #If the date is december 25 or october 31 it prints yup.
    if(date == "DEC 25" or date == "OCT 31"):
        print("yup")
    #If it is neither of those, then it prints nope.
    else:
        print("nope")
        
main() #Calls the function
