#ifndef IsEvenOdd_H
#define IsEvenOdd_H
#include "ValueIndependantTester.h"
#include <cstddef>

class IsEvenOdd : public ValueIndependantTester {
private:
  static int numAliveObjects;

protected:
public:
  IsEvenOdd();
  ~IsEvenOdd();
  bool evaluate(int val);
  NumberTester *clone();
  static int getNumAliveObjects();
};
#endif