#include <iostream>

// Define a struct for the node
struct Node {
    int data; // Data stored in the node
    Node* next; // Pointer to the next node in the list
};

// Function to add a new node at the end of the linked list
void addNode(Node*& head, int newData) {
    Node* newNode = new Node; // Create a new node
    newNode->data = newData; // Set the data for the new node
    newNode->next = nullptr; // Since this will be the last node, set its next pointer to nullptr

    if (head == nullptr) {
        // If the list is empty, make the new node the head of the list
        head = newNode;
    } else {
        // Otherwise, traverse the list to find the last node and append the new node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the elements of the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Function to delete the entire linked list to free memory
void deleteList(Node*& head) {
    Node* current = head;
    Node* next;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }

    head = nullptr; // Set head to nullptr to indicate that the list is empty
}

int main() {
    Node* head = nullptr; // Initialize an empty linked list

    // Adding nodes to the linked list
    addNode(head, 10);
    addNode(head, 20);
    addNode(head, 30);
    addNode(head, 40);

    // Printing the linked list
    std::cout << "Linked list: ";
    printList(head);

    // Deleting the linked list to free memory
    deleteList(head);

    return 0;
}
