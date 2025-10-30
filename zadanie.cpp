#include "zadanie.h"
#include <iostream>
#include "vector"

vector<int> WriteVector() {
  int n, num;
  vector<int> v;

  cout << "Введите количество элементов: ";
  cin >> n;
  cout << "Введите " << n << " числа: ";

  for (; n > 0; n--) {
    cin >> num;
    v.push_back(num);
  }

  return v;
}


// --------------------- №1
int Sum(const vector<int> &v) {
  int sum = 0;
  for (int i : v) {
    sum += i;
  }
  return sum;
}

void Zadanie1() {
  vector<int> v = WriteVector();

  cout << "Сумма всех элементов: " << Sum(v) << endl;
}

// ------------------------ №2
int CountEven(const vector<int> &v) {
  using namespace std;

  int count = 0;

  for (int i : v) {
    if (i % 2 == 0) {
      count++;
    }
  }

  return count;
}

void Zadanie2() {
  vector<int> v = WriteVector();

  cout << "Количество четных элементов: " << CountEven(v) << endl;
}

// ----------------------------- №3
int MaxElement(const vector<int> &v) {
  int max = -9999;
  for (int i : v) {
    if (i > max)
      max = i;
  }

  return max;
}

int MinElement(const vector<int> &v) {
  int min = 9999;
  for (int i : v) {
    if (i < min) {
      min = i;
    }
  }
  return min;
}

void Zadanie3() {
  vector<int> v = WriteVector();

  cout << "Максимальный элемент: " << MaxElement(v) << endl;
  cout << "Минимальный элемент: " << MinElement(v) << endl;
}

//  ------------------------- №4
double Average(const vector<int> &v) {
  return Sum(v) / (double)v.size();
}

void Zadanie4() {
  vector<int> v = WriteVector();
  cout << "Среднее арифметическое элементов: " << Average(v) << endl;
}


// -------------------- 5
void CountPosNeg(const vector<int> &v, int &neg, int &pos, int &zero) {
  for (int i : v) {
    if (i < 0)
      neg++;
    else if (i > 0)
      pos++;
    else
      zero++;
  }
}

void Zadanie5() {
  vector<int> v = WriteVector();
  int neg = 0, pos = 0, zero = 0;
  CountPosNeg(v, neg, pos, zero);
  cout << "Положительных: " << pos << endl;
  cout << "Отрицательных: " << neg << endl;
  cout << "Нулей: " << zero << endl;
}

// ------------------ 6
void ReverseArray(vector<int> &v) {
  int left = 0;
  int right = v.size() - 1;

  while (left < right) {
    int t = v[left];
    v[left] = v[right];
    v[right] = t;

    left++;
    right--;
  }
}

void Zadanie6() {
  vector<int> v = WriteVector();
  ReverseArray(v);

  cout << "Элементы в обратном порядке: ";

  for (int i : v) {
    cout << i << " ";
  }
}

// -------------------------------- 7
int LocalMaximumCount(const vector<int> &v) {
  int count = 0;

  for (int i = 1; i < v.size()-1; i++) {
    if (v[i] > v[i-1] && v[i] > v[i+1]) {
      count++;
    }
  }

  return count;
}

void Zadanie7() {
  vector<int> v = WriteVector();
  cout << "Количество локальных максимумов: " << LocalMaximumCount(v) << endl;
}







