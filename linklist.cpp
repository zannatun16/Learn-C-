#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        }
         else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }




    void Show() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }




    void insertBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }


    void insertAfterNode(int value, int afterValue) {
        Node* newNode = new Node;
        newNode->data = value;

        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == afterValue) {
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        }

        cout << "Node with value " << afterValue << " not found." << endl;
    }



    bool search(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }


    void deleteFirst() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }


    void deleteLast() {
        if (head == nullptr || head->next == nullptr) {
            deleteFirst();
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }


    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }

        if (head->data == value) {
            deleteFirst();
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            if (temp->next->data == value) {
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
                return;
            }
            temp = temp->next;
        }

        cout << "Node with value " << value << " not found." << endl;
    }
};

int main() {
    LinkedList list;

    list.insertEnd(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);
    list.insertEnd(50);

    cout << "Linked List: ";
    list.Show();

    list.insertBeginning(85);
    cout << "After inserting at the beginning: ";
    list.Show();


    list.insertAfterNode(100, 30);
    cout << "After inserting after node with value 30: ";
    list.Show();

    cout << "Search for 40: ";

    if (list.search(40)) {
        cout << "Found" << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    list.deleteFirst();
    cout << "After deleting first node: ";
    list.Show();

    list.deleteLast();
    cout << "After deleting last node: ";
    list.Show();

    list.deleteNode(30);
    cout << "After deleting node with value 30: ";
    list.Show();

    return 0;
}
