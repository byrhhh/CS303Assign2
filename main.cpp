#include "Node.h"
#include "LinkedList.h"
#include "Stack.h"


int main(){
  Stack Stack;
  bool result = Stack.isEmpty();
  cout << "Is the stack empty? " << boolalpha << result << endl;
  Stack.pushVal(1);
  Stack.pushVal(2);
  Stack.pushVal(3);
  Stack.pushVal(6);
  Stack.pushVal(7);
  Stack.printStack();
  Stack.removeVal();
  Stack.printStack();
  Stack.pushVal(21);
  Stack.printStack();
  cout << "Average: " << Stack.mean() << endl;
  result = Stack.isEmpty();
  cout << "Is the stack empty? " << boolalpha << result << endl;
