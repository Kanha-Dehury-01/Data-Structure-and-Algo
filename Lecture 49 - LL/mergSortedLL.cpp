#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        next = NULL;
        this->data = data;
    }

    ~Node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};

Node<int> *solve(Node<int> *first, Node<int> *second)
{
    Node<int> *prev1 = first;
    Node<int> *curr1 = first->next;
    Node<int> *prev2 = second;
    Node<int> *curr2 = prev2->next;

    // if single node exist in both LL
    if (prev1->next == NULL && prev2->next == NULL)
    {
        prev1->next = prev2;
        prev2->next = NULL;
        return first;
    }

    while (curr1 != NULL && prev2 != NULL)
    {
        if ((prev1->data <= prev2->data) && (prev2->data <= curr1->data))
        {
            prev1->next = prev2;
            curr2 = prev2->next;
            prev2->next = curr1;

            prev1 = prev2;
            prev2 = curr2;
        }
        else
        {

            if (curr1->next == NULL)
            {
                curr1->next = prev2;
                return first;
            }
            else
            {

                prev1 = curr1;
                curr1 = curr1->next;
            }
        }
    }
    return first;
}

Node<int> *sortTwoLists(Node<int> *first, Node<int> *second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }

    if (first->data <= second->data)
    {
        return solve(first, second);
    }
    else
    {
        return solve(second, first);
    }
}

int main(){


    return 0;
}
