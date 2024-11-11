#include <iostream>
#define SIZE 5  // Define the size of the circular queue

class CircularQueue {
private:
    int items[SIZE], front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        return (front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1));
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Add an element to the queue
    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full\n";
            return;
        } else if (front == -1) {  // Insert the first element
            front = rear = 0;
        } else if (rear == SIZE - 1 && front != 0) {  // Wrap around
            rear = 0;
        } else {
            rear++;
        }
        items[rear] = value;
        std::cout << "Inserted " << value << "\n";
    }

    // Remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return -1;
        }

        int data = items[front];
        items[front] = -1;  // Optional: clear the slot

        if (front == rear) {  // Queue has only one element
            front = rear = -1;
        } else if (front == SIZE - 1) {  // Wrap around
            front = 0;
        } else {
            front++;
        }

        return data;
    }

    // Display the elements of the queue
    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty\n";
            return;
        }

        std::cout << "Queue elements: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++) {
                std::cout << items[i] << " ";
            }
        } else {
            for (int i = front; i < SIZE; i++) {
                std::cout << items[i] << " ";
            }
            for (int i = 0; i <= rear; i++) {
                std::cout << items[i] << " ";
            }
        }
        std::cout << "\n";
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.display();

    q.enqueue(60);
    q.display();

    return 0;
}
