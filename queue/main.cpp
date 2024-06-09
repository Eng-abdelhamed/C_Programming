#include <iostream>
using namespace std;

class queue {
private:
    int rear;
    int front;
    int size;
    int *items;

public:
    queue(int s) {
        size = s;
        front = rear = -1;
        items = new int[size];
    }

    void enqueue(int value) {
        if (isfull()) {
            cout << "Queue is full\n";
            return;
        }
        if (isempty()) {
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
        } else {
            rear++;
        }
        items[rear] = value;
    }

    bool isempty() {
        return (front == -1);
    }

    bool isfull() {
        return ((rear + 1) % size == front);
    }

    void dequeue() {
        if (isempty()) {
            cout << "Queue is empty\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    int peak() {
        if (isempty()) {
            cout << "Queue is empty\n";
            return -1;
        } else {
            return items[front];
        }
    }

    void display() {
        if (isempty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                cout << items[i] << " ";
            }
        } else {
            for (int i = front; i < size; i++) {
                cout << items[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                cout << items[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int numbers;
    int size;
    cout << "Enter the size of the queue: ";
    cin >> size;

    queue q1(size);

    cout << "Enter the elements (0 to stop entering): ";
    while (true) {
        cin >> numbers;
        if (numbers == 0 || q1.isfull()) break;
        q1.enqueue(numbers);
    }

    q1.display();
    int res = q1.peak();
    if (res != -1) {
        cout << "Front element is: " << res << endl;
    }

    return 0;
}
