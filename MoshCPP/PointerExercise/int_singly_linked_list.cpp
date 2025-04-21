/*
Exercise 6: Implement a Simple Linked List
1. Use pointers to create a simple singly linked list.
2. Implement functions to:
    * Add a node at the end.
    * Print the list.
    * Delete all nodes.
*/

#include <iostream>


using namespace std;


struct LinkedListNode{
    int data;
    LinkedListNode* nextNode;
};

class LinkedList{
public:
    LinkedList(){
        this->head = nullptr;
    }
    ~LinkedList(){
        clearAllNode();
    }
    void addNodeAtEnd(int number){
        cout << "Add node function called" << endl;
        LinkedListNode* newNode = new LinkedListNode;
        newNode->nextNode = nullptr;
        newNode->data = number;
        
        if(this->head == nullptr){
            this->head = newNode;
        }else{
            LinkedListNode* currentNode = this->head;
            while(currentNode != nullptr){
                if(currentNode->nextNode == nullptr){
                    break;
                }
                currentNode = currentNode->nextNode;
            }
            currentNode->nextNode = newNode;
        }
    }
    void clearAllNode(){
        /*
            Incorrect Implementation below:
            trying to delete the last node repeatedly, 
            but the logic breaks once only one node remains. 
            This leads to undefined behaviour and may cause a crash.
        */ 

        // while(this->head != nullptr){
        //     LinkedListNode* currentNode = this->head;
        //     LinkedListNode* lastNode = nullptr;
        //     while(currentNode->nextNode != nullptr){
        //         currentNode = currentNode->nextNode;
        //         lastNode = currentNode;
        //     }
        //     delete currentNode;
        //     currentNode = lastNode;
        //     currentNode->nextNode = nullptr;
        // }

        while(this->head != nullptr){
            LinkedListNode* temp = this->head;
            delete head;
            head = temp->nextNode;
        }
        cout << "Already Cleaned Linked List\n";
    }

    void printAllNode(){
        if(this->head != nullptr){
            LinkedListNode* currentNode = this->head;
            while(currentNode != nullptr){
                cout << currentNode->data << endl;
                currentNode = currentNode->nextNode;
            }
        }
        if(this->head == nullptr){
            cout << "Empty Singly int Linked List\n";
        }
    }
private:
    LinkedListNode* head;
};

int main(){
    LinkedList newList;
    newList.addNodeAtEnd(666);
    newList.addNodeAtEnd(998);
    newList.addNodeAtEnd(168);
    newList.printAllNode();
    newList.clearAllNode();
    newList.printAllNode();
    return 0;
}
