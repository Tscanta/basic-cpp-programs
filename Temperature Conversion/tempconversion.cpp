#include <iostream>
int main() {
     using namespace std;
     double temp;
     char unit;
     cout << "press F or f to convert from celsius to fareinheit" << '\n';
     cout << "press C or c to convert from fareinheit to celsius";
     cin >> unit;
     if ( unit == 'F' || unit == 'f') {
          cout << "Enter the temperature in celsius" << '\n';
          cin >> temp;
          temp = (temp * 1.8)+32.0;
          cout << "Converted temperature: " << temp << " F";
     }
     else if (unit == 'C' || unit == 'c') {
          cout << "Enter the temperature in fareinheit" << '\n';
          cin >> temp;
          temp = (temp - 32) * 0.5; //or (temp - 32)/1.8;
          cout << "Converted temperature: " << temp << " C";
     }
}