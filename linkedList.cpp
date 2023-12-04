#include <bits/stdc++.h>
using namespace std;

struct node
{
    int n;
    struct node *next;
};

node *addValueLast(int v, node *head)
{
    node *now = (node *)malloc(sizeof(node));

    if (now == NULL)
    {
        return NULL;
    }
    else
    {
        now->n = v;
        now->next = NULL;

        if (head == NULL)
        {
            head = now;
        }
        else
        {
            node *currentNode = head;
            while (currentNode->next != NULL)
            {
                currentNode = currentNode->next;
            }

            currentNode->next = now;
        }
        return head;
    }
}

node *addValueStart(int x, node *head)
{
    node *now = (node *)malloc(sizeof(node));

    if (now == NULL)
    {
        return NULL;
    }
    else
    {
        now->n = x;
        if (head == NULL)
        {
            now->next = NULL;
            head = now;
        }
        else
        {
            now->next = head;
            head = now;
        }
        return head;
    }
};

node *addAfterX(int v, int x, node *head)
{
    node *now = (node *)malloc(sizeof(node));

    if (now == NULL)
    {
        return head;
    }
    else
    {
        now->n = v;

        for (node *i = head; ; i = i->next)
        {
            if (i->n == x && i->next == NULL)
            {
                now->next = NULL;
                i->next = now;
                break;
            }
            else if (i->n == x)
            {
                now->next = i->next;
                i->next = now;
                break;
            }
        }
        return head;
    }
};  

node *addBeforeX(int v, int x, node *head)
{
    node *now = (node *)malloc(sizeof(node));

    if (now == NULL)
    {
        return NULL;
    }
    else if (head->n == x)
    {
        now->n = v;
        now->next = head;
        head = now;

        return head;
    }
    else
    {
        now->n = v;

        node *prev = head;
        node *curr = head->next;

        while (curr != NULL)
        {
            if (curr->n == x)
            {
                prev->next = now;
                now->next = curr;
                break;
            }
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
}

void PrintList(node *head)
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }

    while (head != NULL)
    {
        cout << head->n << " ";
        head = head->next;
    }

    cout << endl;
}

int main()
{
    node *head = NULL;
    int n, num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        head = addValueLast(num, head);
    }

    PrintList(head);

    // cin >> num;
    // head = addValueStart(num, head);

    // PrintList(head);

    cin >> num;
    head = addBeforeX(num, 1, head);

    PrintList(head);

    return 0;
}