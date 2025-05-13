#include <iostream>
using namespace std;

class Stack {
private:
    int* stackArray;
    int top;
    int maxSize;

public:
    // Constructor
    Stack(int size = 100) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = 0;
    }

    // Destructor
    Stack() {
        delete[] stackArray;
    }

    bool isEmpty() {
        return top == 0;
    }

    bool isFull() {
        return top == maxSize;
    }

    bool push(int element) {
        if (isFull()) {
            cout << "Stack is Full\n";
            return false;
        }
        stackArray[top++] = element;
        return true;
    }

    bool pop() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return false;
        }
        top--;
        return true;
    }

    int topElement() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return stackArray[top - 1];
    }

    void show() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return;
        }
        cout << "Stack (top to bottom):\n";
        for (int i = top - 1; i >= 0; i--) {
            cout << stackArray[i] << endl;
        }
    }
};

// Example usage
int main() {
    Stack s(10);  // Stack of size 10
    s.push(5);
    s.push(10);
    s.push(15);

    s.show();

    cout << "Top element is: " << s.topElement() << endl;

    s.pop();
    s.pop();
    s.show();
    s.push(30);
    s.show();

    return 0;
}


