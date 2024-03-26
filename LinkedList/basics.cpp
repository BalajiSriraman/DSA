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

// Function to delete a node with a specific value from the linked list
void deleteNode(Node*& head, int value) {
    // If the list is empty, return
    if (head == nullptr)
        return;

    // If the node to be deleted is the head node
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Traverse the list to find the node with the given value and its previous node
    Node* prev = nullptr;
    Node* current = head;
    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->next;
    }

    // If the value is not found in the list
    if (current == nullptr)
        return;

    // Unlink the node from the list and delete it
    prev->next = current->next;
    delete current;
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