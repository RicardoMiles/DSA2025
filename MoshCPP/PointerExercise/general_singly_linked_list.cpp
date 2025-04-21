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

template<typename T>
struct LinkedListNode{
    T data;
    LinkedListNode* nextNode;
};

template<typename T>
class LinkedList{
public:
    LinkedList(){
        this->head = nullptr;
    }
    ~LinkedList(){
        clearAllNode();
    }
    void addNodeAtEnd(T dataInput){
        cout << "Add node function called" << endl;
        LinkedListNode<T>* newNode = new LinkedListNode<T>;
        newNode->nextNode = nullptr;
        newNode->data = dataInput;
        
        if(this->head == nullptr){
            this->head = newNode;
        }else{
            LinkedListNode<T>* currentNode = this->head;
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
        while(this->head != nullptr){
            LinkedListNode<T>* temp = this->head;
            delete head;
            head = temp->nextNode;
        }
        cout << "Already Cleaned Linked List\n";
    }

    void printAllNode(){
        if(this->head != nullptr){
            LinkedListNode<T>* currentNode = this->head;
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
    LinkedListNode<T>* head;
};

int main(){
    LinkedList<string> newList = {};
    newList.addNodeAtEnd("Congratulations");
    newList.addNodeAtEnd("On");
    newList.addNodeAtEnd("Sucessful BUild");
    newList.printAllNode();
    newList.clearAllNode();
    newList.printAllNode();
    return 0;
}

