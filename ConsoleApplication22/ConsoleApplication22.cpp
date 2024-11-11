#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};
 
class LinkedList
{
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    void push(int data)
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    ~LinkedList()
    {
        Node* current = head;
        while (current != nullptr)
        {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }
};

int main()
{
    LinkedList list;
    list.push(10);
    list.push(20);
    list.push(30);
}
