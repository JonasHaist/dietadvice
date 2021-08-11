#include <unistd.h> //This allows the program to run on Linux/Unix systems 
#include <iostream>
#include <cstdlib> //The cstdlib library adds the 'sleep' function

using namespace std;
int main()
{
int w, wl; // w will be the weight in kilograms, wl will be the weight in pounds
  string select;
  
cout << "Would you like to use pounds, or kilograms? Input 'lbs' or 'kg'" << endl;
  cin >> select;
    cout << "Enter your weight ";
      cin >> w; //The user inputs the variable's value
  
  
if( select == "lbs")
      w = w/2; // We convert pounds to kilos
  
else if ( select == "kg")
      w = w; // If the user chose kilos, we change nothing.
  
else {
while ( 1>0) { //Our program enters a loop, that lasts forever
{
    cout.flush();
      sleep(1); //The program is put on hold for a given amout of time, in this instance one second
    cout << "ERROR 0001. WEIGHT UNIT DOES NOT EXIST";
    }
      } 
cout << "Calculating";
for(int a=0; a<7; a++) //Our program enters a loop
{
cout.flush();
sleep(1); //The program is put on hold for a given amout of time, in this instance one second
cout << ".";
}
cout<< "ur fat" << endl; //The program exits the loop and prints the final text, after which the program returns 0 and terminates
return 0;
}
//Enjoy
