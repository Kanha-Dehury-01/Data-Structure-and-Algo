#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *findMid(Node *head)
{
    if (head->next == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head->next;

    while (fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

Node *mergeSort(Node *left, Node *right)
{
    if (left == NULL)
    {
        return left;
    }
    if (right == NULL)
    {
        return right;
    }

    Node *ans = new Node(-1);
    Node *temp = ans;

    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;

    return ans;
}

Node *sortLL(Node *head)
{
    // if no element or one element is present
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // break the LL into two halves
    Node *mid = findMid(head);

    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;

    left = sortLL(left);
    right = sortLL(right);

    return mergeSort(left, right);
}

int main(){

    return 0;
}