#include "Node.h"
#include "LinkedList.h"
//template <typename T>


namespace myNameSpace {
  
template <typename T>
  
void myLinkedList::push_front(const T& item){  //function to add a new node to the front of the list
  head = new Node(item, NULL, head);  //creates a new node with the given item and the current head as its previous node
  //if list is empty
  if(tail == NULL)  //if the list is empty
    tail = head;
  if (head -> next != NULL)  //if the list is not empty
    head -> next -> prev = head; 
}





void myLinkedList::push_back(const T&item) { //funtion to add a new node to the back of the list
  if(tail != NULL) {  //if the list is not empty
    tail -> next = new Node(item, tail, NULL);  //creates a new node with the given item and the current tail as its next node
    num_items++;
  }
  else { //if list is empty
    push_front(item); //calls pre-existing push_front function to add to the front of the list
  }

}

  


void myLinkedList:: pop_front() {  //function to remove the first node from the list
  if (head==Null) {
    throw std::invalid_argument("List is empty");  //throws an error if the list is empty
  }
  
  Node* removed_node = head;  //creates a pointer to the node to be removed
  head = head -> next; //sets the new head to the next node
  delete removed_node; //deletes the removed node
}



void myLinkedList::pop_back() { //function to remove tail node
  if(tail == NULL) 
    throw std::invalid_argument("List is empty");  //throws an error if the list is empty
  
  Node* removed_node = tail;  //creates a pointer to the node to be removed
  tail = tail -> prev; //sets the new tail to the previous node
  delete removed_node; //deletes the removed node

  
  if(tail != NULL)   //if list is not empty 
    tail -> next = NULL;  //sets the new tail's next node to NULL

  else 
    head = NULL;  //if list is empty, sets the head to NULL
    
  num_items--;
  
}

T& myLinkedList::front() {
  if (head == NULL) {
    throw std::invalid_argument("List is empty");  //throws an error if the list is empty
  }

  return head -> data;  //returns the item of the head node
  
}

T& myLinkedList::back() {
  if (head==NULL) 
    throw std::invalid_argument ("List is empty");  //throws an error if the list is empty")
  
  return tail -> data;  //returns the item of the tail node
}



bool myLinkedList::empty() {  //returns true if head pointer is null 
 return  head == NULL ;
}



void myLinkedList::insert(size_t index, const T& item) {
  
  if (index > num_items) //if index is greater than or equal to the number of items in the list
    throw std::invalid_argument("Index out of range");

  
 if(index == 0){ //if index is 0, call pop front function
    push_front(item);
    return
    }

  
  if(index == num_items-1) { //if index is the last item in the list, call push back function
    push_back(item);
    return
    }
  
  Node* current = head;
  int position = 0;

  while(position < index - 1) {
      current = current -> next;
      position++;
    }
  Node* new_node = new Node(item, current, current -> next);

  
  num_items++;

  
}
  



bool myLinkedList::remove (size_t index) {
  if (index >= num_items) {  //if index is greater than or equal to the number of items in the list throw error
    throw std::invalid_argument("Index out of range")
    return false
    }

  
  if (index == 0) {  //call pop_front function if index is 0
    pop_front();
    return true;
    }

  if (index == num_items - 1) {  //call pop_back function if index is the last item in the list
    pop_back();
    return true;
    }

   //otherwise, call insert function with index and item
  Node* current = head; //creates a pointer to the current node
  size_t position = 0;
  
  while (position < index-1) { //loops through the list until the node before the index is found
    current = current -> next; //moves the current pointer to the next node
    position++; //increments the position counter
    }

  
  Node* removed_node = current -> next; //creates a pointer to the node to be removed
  current -> next = removed_node -> next;  //sets the next node of the current node to the next node of the removed node


  delete removed_node;  //deletes the removed node
  
  num_items--;
  
  return true;
  
  
}

}
