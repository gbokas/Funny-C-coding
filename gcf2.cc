#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int number1, number2, n1, n2, result;
  cout << "Give first number" << endl;
  cin >> number1 ;
  cout << "Give second number" << endl;
  cin >> number2;

  for (int i = 1; i <= number1 && i <= number2; i++)
  {
    if (number1 == number2)
    {
      result = number1;
      break;
    }
  cout << "Problem" << endl;
    if (number1 % i == 0 && number2 % i == 0)
    result = i;
  }
  cout << result <<endl;
}  
