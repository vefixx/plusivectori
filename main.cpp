#include <iostream>
#include "windows.h"

#include "zadanie.h"

int main() {
  SetConsoleOutputCP(CP_UTF8);

  int n;
  cout << "Введите номер задания (0 - выход): \n"
          "1) Сумма всех элементов\n"
          "2) Количество четных элементов\n"
          "3) Поиск максимального и минимального\n"
          "4) Среднее арифметическое элементов\n"
          "5) Количество нулей, отрицательных, положительных\n"
          "6) Обратный порядок массива\n";
  cin >> n;

  switch (n) {
    case 0:
      return 0;
    case 1:
      Zadanie1();
      break;
    case 2:
      Zadanie2();
      break;
    case 3:
      Zadanie3();
      break;
    case 4:
      Zadanie4();
      break;
    case 5:
      Zadanie5();
      break;
    case 6:
      Zadanie6();
      break;
    default:
      cout << "Введен неверный номер" << endl;
      break;
  }

  main();

  return 0;
}
