/*
precious idehen

program : this program converts fahrenhite temperature
		  to celcius, and check if the temperature is 
		  below 25 degree celsius and 0 degree celcius.


dictionary variable used: fahrenheittemp,
						  celsiustemp.
                          

*/




#include <iostream>
#include <string>

using namespace std;
int main()
{
   //declaration of variable
   double fahrenheittemp;
   long double celsiustemp;

   //
   cout << "Enter the temperature in fahrenheit: "<< flush;
   cin >> fahrenheittemp;
   celsiustemp =(5.0/9.0)*(fahrenheittemp-32);
   cout << "The celsuis temperature is: "<<celsiustemp << endl;  
    if (celsiustemp<25)
   {
   
   
      if (celsiustemp<0)
      {
         cout << "the weather is very cold" << endl;      }
      else
      {
         cout << "the weather is just cold" << endl;      }
   }  
   else
   {
      cout << "the weather is pretty hot" << endl;   }

   return 0;
}
