#include <iostream>



class Node{
public:
    int data;
    Node *next;
    Node(){
        std::cout << "Please enter a value for the node: ";
        std::cin >> data;
        this->data = data;
        this->next = NULL;
    }
};



class LinkedList{
private:
    Node *head;
    Node *currentNode;
    int sizeList = 0;

public:

    void addNode(){
        if(this->sizeList == 0){
            this->sizeList += 1;
            Node *newNode = new Node();
            head = newNode;
        }
        else{
            Node *newNode = new Node();
            currentNode = head;
            while(currentNode -> next != NULL){
                currentNode = currentNode -> next;
            }
            currentNode->next = newNode;
            this->sizeList += 1;
        }
    }

    void printList(){
        if(this->sizeList == 0){
            std::cout << "Sorry, there is nothing to print, please enter something.\n";
        }
        else{
            currentNode = head;
            while(currentNode->next != NULL){
                std::cout << currentNode->data << " --> ";
                currentNode = currentNode->next;
            }
            std::cout << currentNode->data << std::endl;
        }
    }


    void returnKToLast(){
        int k;
        std::cout << "Please enter the element relative to the last one that you would like to delete: ";
        std::cin >> k;
        int currentIndex = 0;
        if(this->sizeList != 0) {

            if(k > this->sizeList){
                std::cout << "Out of range." << std::endl;
                return;
            }
            else{
                currentNode = head;
                while(currentIndex != (this->sizeList - k)){
                    currentNode = currentNode -> next;
                    currentIndex += 1;
                }
                std::cout << "The value of k-th to last node, with k being, " << k << " is, " << currentNode->data << std::endl;
            }
        }

        else{
            std::cout << "Sorry, can't return anything, because the size of the list is 0." << std::endl;
            return;
        }
    }
};



int main(){
    LinkedList* list = new LinkedList();
    list->addNode();
    list->addNode();
    list->addNode();
    list->addNode();
    list->printList();
    list->returnKToLast();
    return 0;
}