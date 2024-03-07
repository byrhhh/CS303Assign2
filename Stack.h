#include "Node.h"



//Class stack using vector

class Stack {
private:
  vector<int> v1; //create vector of ints to implement stack
public: //declare all functions
  bool isEmpty();
  void pushVal(int value);
  void removeVal();
  int topVal();
  float mean();
  void printStack();
  
  
};
