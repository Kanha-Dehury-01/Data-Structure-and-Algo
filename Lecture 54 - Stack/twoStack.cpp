#include <bits/stdc++.h>
class TwoStack
{

public:
    int *arr;
    int top1;
    int top2;
    int size;

    TwoStack(int s)
    {
        this->size = s;
        arr = new int[size];
        top1 = -1;
        top2 = s;
    }

    // Push in stack 1.
    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            return;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            return;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int element = arr[top1--];
            return element;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            int element = arr[top2++];
            return element;
        }
        else
        {
            return -1;
        }
    }
};


int main(){


    return 0;
}