#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int array[1000], n;
  int middle, right, left;
  cout << "give number of elements in array" << endl;
  cin >> n;
  cout << "give elements of array" << endl;
  left = 0;
  right = n-1;
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  
  middle = n / 2;
  
  while ( left < right)
  {
  if (middle % 2 ==0)
  {
//    cout << left << " " << right << endl;
    if (array[middle] == array[middle-1])
    {
      right = middle - 2;
      middle = left + (right - left ) / 2;
    }
    else if (array[middle] == array[middle + 1])
    {
      left = middle + 2;
      middle = left + (right - left ) / 2;
    }
    else
    {
      cout << array[middle] << endl;
      break;
    }
  }   
  else
  {
  if (array[middle] == array[middle-1])
  {
    left = middle + 1;
    middle = left + (right - left) / 2;
  }
  else if (array[middle] == array[middle+1])
  {
    right = middle - 1;
    middle = left + (right - left) / 2;
  }
  }
  }
 
  cout << array[left] << endl;
  
}
