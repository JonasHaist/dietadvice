#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
int w;
cout << "Enter your weight ";
cin >> w;
cout << "Calculating";
for(int a=0; a<7; a++){
cout.flush();
sleep(1);
cout << ".";
}
cout<< "ur fat" << endl;
return 0;
}
