#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream;
  filestream.open("testouts.txt",ios::app);  
  if (filestream.is_open())  
  {  
    filestream << "Welcome to javaTpoint.\n";  
    filestream << "C++ Tutoriajcshgjhasgjdsagdajsg ajshbjhasbg l.\n";  
    filestream.close();
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  





