#include <iostream>
#include <string>

using namespace std;

class Fraction{
public:
  Fraction(int inputNumerator, int inputDenominator);
  string toString();
  double toDouble();
private:
  int numerator;
  int denominator;

  string numer;
  string denom;
};
// //ex input = "3 / 4"
// // ex output= "3/4 is 0.75 in decimal"

Fraction::Fraction(int inputNumerator, int inputDenominator){
  numerator = inputNumerator;
  denominator = inputDenominator;
  
  numer = to_string(inputNumerator);
  denom = to_string(inputDenominator);
}

string Fraction::toString(){
  return numer + "/" + denom;
}
double Fraction::toDouble(){
  // numerator and denominator are ints 
  //have to force at least one to be float
  return numerator / (1.0 * denominator);
}

int main() {
  int n, d;
  string input = "";
  cout << "Please input your fraction" << endl;
  
  getline(cin,input);
  
  n = stoi(input.substr(0, input.find('/')));
  
  d = stoi(input.substr(input.find('/')+1));
  
  Fraction oneOverAnother(n, d);
  
  cout << oneOverAnother.toString() << " is " << oneOverAnother.toDouble() << " in decimal" << endl;
  
 return 0;
}