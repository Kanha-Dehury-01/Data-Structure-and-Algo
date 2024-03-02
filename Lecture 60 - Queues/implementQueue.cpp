#include <bits/stdc++.h>
using namespace std;


class Queue
{
    int size;
    int *arr;
    int qfront;
    int rear;

public:
    Queue()
    {
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        if (rear == qfront)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            return;
        }
        arr[rear] = data;
        rear++;
    }

    int dequeue()
    {
        if (rear == qfront)
        {
            return -1;
        }
        int ans = arr[qfront];
        arr[qfront] = -1;
        qfront++;
        if (rear == qfront)
        {
            rear = 0;
            qfront = 0;
        }
        return ans;
    }

    int front()
    {
        if (rear == qfront)
        {
            return -1;
        }
        return arr[qfront];
    }
};

int main(){



    return 0;
}