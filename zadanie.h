#ifndef PLUSIVECTORI_ZADANIE1_H
#define PLUSIVECTORI_ZADANIE1_H
#include <vector>

using namespace std;

vector<int> WriteVector();

// 1
int Sum(const vector<int>& v);
void Zadanie1();

// 2
int CountEven(const vector<int>& v);
void Zadanie2();

// 3
int MaxElement(const vector<int>& v);
int MinElement(const vector<int>& v);
void Zadanie3();

// 4
double Average(const vector<int>& v);
void Zadanie4();

// 5
void CountPosNeg(const vector<int>& v, int& neg, int& pos, int& zero);
void Zadanie5();

// 6
void ReverseArray(const vector<int>& v);
void Zadanie6();

#endif //PLUSIVECTORI_ZADANIE1_H