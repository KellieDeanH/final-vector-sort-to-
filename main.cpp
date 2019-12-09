/* 50 extra credit points for color
	Vectors, Henderson,Perez, 10/29/19
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include<algorithm> // for sort and reverse
#include<vector>
#include<iomanip>
#include<numeric>
using namespace std;
void vectorNumbers(vector<double> &vect);

void program1(); 
void program2();
int main()
{ 
  
   program1();
    return 0;

}


void vectorNumbers(vector<double> &vect)
{

  string option = " ";
// the option lacal to int main
// loop until the user provides "e" or (&&) "E". as exit condition 
string color = "\x1b[" + to_string(32) + ";"+to_string(99)+"m";
string reset = "\x1b[0m";
sort(vect.begin(),vect.end());
  //reverse(vect.begin(),vect.end());
  for (double x :vect )
{
  cout << "numbers: " << x  << endl;
}
}

void program1()
{
string option = " ";
vector<string> vectorlastNames; 
// the option lacal to int main
// loop until the user provides "e" or (&&) "E". as exit condition 
string color = "\x1b[" + to_string(32) + ";"+to_string(99)+"m";
string reset = "\x1b[0m";

  
  
  
  cout << fixed << setprecision(2) << endl;
  vector<double> makeNumbersVector= { 55.27, 200.78,};   
   makeNumbersVector.push_back(100);
   makeNumbersVector.push_back(17.5);
   makeNumbersVector.push_back(144.7);
   vectorNumbers(makeNumbersVector);

   
  
}
