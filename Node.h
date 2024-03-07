#include <iostream>
#include <fstream>
using namespace std;
#include <vector>
#pragma once


namespace myNameSpace {
//template <typename T>
template <typename T>


//node class for each node in linked list
class myNode {
public:
  T data;
  myNode* head;
  myNode* tail;
  myNode* next;



  myNode (const T& data_item, Node* next_val = NULL): 
    data(data_item), next(next_val) {}

};

template <typename T>

class myLinkedList {

private: 


  myNode<T>* head;
  myNode<T>* tail;
  int num_items;

public: //define functions for linked list

  void push_front(const T& item){};
  void push_back(const T& item);
  void pop_front();
  void pop_back();
  T& front();
  T& back();
  bool empty();
  void insert(size_t index, const T& item);
  bool remove(size_t index);
  size_t find(const T& item);

};
  
  
}

