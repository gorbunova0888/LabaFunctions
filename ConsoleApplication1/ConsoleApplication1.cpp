/***************************
* Задание: Функции         *
* Автор:   Горбунова Настя *
* Вариант: 5               *
***************************/

#include <iostream>
#include <vector>
using namespace std;

double addSum(const vector<double>& values, int power) {
  double result = 0.0;
  for (size_t elementIndex = 0; elementIndex < values.size(); ++elementIndex) {
    result += pow(values[elementIndex], power);
  }
  return result;
}

int main() {
  int size;
  cout << "Enter size:";
  cin >> size;

  if (size <=0 || size > 100) {
    cout << "INVALID\n";
    return 0;
  }

  vector <double> D(size);
  for (int elementIndex = 0; elementIndex < size; ++elementIndex) {
    cin >> D[elementIndex];
  }

  double sum = addSum(D, 1);
  double sumSquares = addSum(D, 2);
  double sumCubes = addSum(D, 3);

  cout << "Sum: " << sum << "\n";
  cout << "Squares: " << sumSquares << "\n";
  cout << "Cubes: " << sumCubes << "\n";

  return 0;
}
  


