#ifdef _WIN32
#include <Windows.h> //This allows the program to run on Windows
#else
#include <unistd.h> //This allows the program to run on Linux/Unix systems 
#endif
#include <iostream>
#include <cstdlib> //The cstdlib library adds the 'sleep' function

using namespace std;
int main()
{
int w;
cout << "Enter your weight ";
cin >> w; //The user inputs the variable's value
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
