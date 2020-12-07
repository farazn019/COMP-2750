#include <iostream>
#include <cstring>
void Spavanac(){
    
    int hour; //This variable will hold the hour.
	int minute; //This variable will hold the minute.
	
	//The user will be prompted to enter the hour and the minute.
	std::cin >> hour >> minute;
	minute -= 45; //The minutes are reduced by 45.
	//If the minutes are less than 0, then the hour is reduced by one, and 60 is added to the minute.
	if (minute < 0) {
		hour = hour - 1;
		minute = minute + 60;
	}
	//If the hour is less than 0, then that can only means that it is 11:00pm (23h).
	if (hour < 0) {
		hour = 23;
	}
	//The time is printed.
	std::cout << hour << " " << minute;
}


//The main function is declared here.
int main(){
    Spavanac(); //The function is called here.
    //A value of 0 is returned, signalling ssuccessful termination.
}
