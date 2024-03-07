#include "Stack.h"


//define function that use vector functions to check if the stack is empty
bool Stack::isEmpty(){ 
  if (v1.empty() == true)
    return true;
  else
    return false;
}


//define function that use vector functions to add a value to the stack
void Stack::pushVal(int value) { 
  v1.push_back(value);
  
}

//define function that use vector function to remove a value from the stack
void Stack::removeVal() { 
  
  if(v1.empty()) 
    throw std::invalid_argument("Stack is empty"); 
  
  else
    v1.pop_back();
   
}

//define function that use vector function to return the value at the top of the stack
int Stack::topVal() { 
  
  if(v1.empty()) 
    throw std::invalid_argument("Stack is empty"); 

  else
    return v1.back();
  
}



//create function that returns the mean of the values in the stack
float Stack::mean(){ 

  if(v1.empty()) 
    throw std::invalid_argument("Stack is empty");
  

  else {
    int sum =0;
    for(int i = 0; i < v1.size(); i++) 
      sum += v1[i];
    float average =  static_cast<float>(sum)/v1.size();
    return average;
  }
  
}

//function to print out stack values
void Stack:: printStack() {
  vector <int>values = v1;
  if(values.empty())
    throw std::invalid_argument("Stack is empty");

  cout << "Stack: ";
  for (int i = 0; i < values.size(); i++)
    cout << values[i] << " ";
  cout << endl;
  
    
    
}

