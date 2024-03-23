#include <iostream>

struct Node {
    int data;
    Node* next;
};

// adding or creating a new node

void addNode(Node*& head, int newData){

  Node *newNode = new Node;
  newNode->data = newData;
  newNode->next = nullptr;


  if(head == nullptr){
    head = newNode;
  }else{
    //  traverse the list to find the last node and append the new node
    Node* temp = head;

    while (temp->next != nullptr)
    {
      temp = temp->next;
   }

   temp->next = newNode;
  }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main(){

  Node *head = nullptr;

  addNode(head, 10);

 std::cout << "Linked list: ";
    printList(head);


}