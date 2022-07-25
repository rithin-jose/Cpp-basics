#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev = NULL;
    Node *next = NULL;
};

class list
{
    Node *head;
    Node *last;

public:
    int length;
    list()
    {
        head = NULL;
        last = NULL;
        length = 0;
    }

    void insetAtBegining(int data);
    void deleteAtBegining();
    void traverseForwards();
    void traverseBackwards();
    void insetAtEnd(int data);
    void deleteAtEnd();
    void insetAtPosition(int data, int pos);
    void deleteAtPosition(int pos);
};

void list::insetAtBegining(int data)
{
    Node *nodeptr;
    nodeptr = new Node;
    nodeptr->data = data;

    if (head == NULL)
    {
        head = nodeptr;
        last = nodeptr;
        length++;
    }

    else
    {
        head->prev = nodeptr;
        nodeptr->next = head;
        head = nodeptr;
        length++;
    }

    cout << "Data entred" << endl;
}

void list::deleteAtBegining()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }
    else
    {
        Node *temp;
        temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        cout << "Node  deleted";
        length--;
    }
}

void list::traverseForwards()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }

    else
    {
        Node *temp;
        for (temp = head; temp != NULL; temp = temp->next)
        {
            cout << temp->data << " -> ";
        }

        cout << "NULL" << endl;
        temp = NULL;
        delete temp;
    }
}

void list::traverseBackwards()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
    }

    else
    {
        Node *temp;
        for (temp = last; temp != NULL; temp = temp->prev)
        {
            cout << temp->data << " -> ";
        }

        cout << "NULL";
        temp = NULL;
        delete temp;
    }
}

void list::insetAtEnd(int data)
{
    Node *nodeptr;
    nodeptr = new Node;
    nodeptr->data = data;

    if (head == NULL)
    {
        head = nodeptr;
        last = head;
        length++;
    }
    else
    {
        last->next = nodeptr;
        nodeptr->prev = last;
        last = nodeptr;
        length++;
    }
}

void list::deleteAtEnd()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *temp;
        temp = last;
        if (last->prev != NULL)
        {
            last = last->prev;
            last->next = NULL;
        }
        else
        {
            last = NULL;
            head = NULL;
        }

        length--;
        cout << "Last node deleted" << endl;
        delete temp;
    }
}

void list::insetAtPosition(int data, int pos)
{
    if (pos == 0 && head == NULL)
    {
        insetAtBegining(data);
    }
    else if (pos == 0 && head != NULL)
    {
        insetAtBegining(data);
    }
    else if (pos > 0 && head == NULL)
    {
        cout << "Cannot insert at " << pos << " list is empty" << endl;
    }
    else if (pos > 0 && head != NULL)
    {
        if (pos > length)
        {
            cout << "cannot insert, position is out of Bound." << endl;
        }
        else if (pos == length)
        {
            insetAtEnd(data);
        }
        else
        {
            Node *temp;
            Node *nodeptr;
            nodeptr = new Node();

            nodeptr->data = data;
            temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }

            nodeptr->prev = temp;
            nodeptr->next = temp->next;
            temp->next = nodeptr;

            temp = nodeptr->next;
            temp->prev = nodeptr;

            temp = nodeptr = NULL;
            length++;
            delete temp;
            delete nodeptr;
        }
    }
}

void list::deleteAtPosition(int pos)
{
    if (pos == 0 && head == NULL)
    {
        deleteAtBegining();
    }
    else if (pos == 0 && head != NULL)
    {
        deleteAtBegining();
    }
    else if (pos > 0 && head == NULL)
    {
        cout << "Cannot delete at " << pos << " list is empty" << endl;
    }
    else if (pos > 0 && head != NULL)
    {
        if (pos > length)
        {
            cout << "cannot insert, position is out of Bound." << endl;
        }
        else if (pos == length)
        {
            deleteAtEnd();
        }
        else
        {
            Node *temp;
            Node *temp2;
            temp = head;

            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            temp2 = temp->next;

            temp->next = temp2->next;
            temp2->next->prev = temp;

            delete temp2;
            length--;

            temp = NULL;
            delete temp;
        }
    }
}

int main()
{
    int ch, data, pos;
    list dll;
    string ans;

    dll.insetAtBegining(5);
    dll.insetAtBegining(4);
    dll.insetAtBegining(3);
    dll.insetAtBegining(2);
    dll.insetAtBegining(1);

    do
    {

        cout << "1. Insertion at begining" << endl;
        cout << "2. Deletion at begining" << endl;
        cout << "3. Trverse node Forwards" << endl;
        cout << "4. Trverse node Backwards" << endl;
        cout << "5. Insert node at last" << endl;
        cout << "6. Deletion node at last" << endl;
        cout << "7. Insert node at position" << endl;
        cout << "8. Deletion node at position" << endl
             << endl;
        cout << "Enter your choice ";

        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the data to be inserted ";
            cin >> data;
            dll.insetAtBegining(data);
            break;
        case 2:
            cout << "Enter the position to be deleted ";
            cin >> pos;
            dll.deleteAtBegining();
            break;
        case 3:
            dll.traverseForwards();
            break;
        case 4:
            dll.traverseBackwards();
            break;
        case 5:
            cout << "Enter the data to be inserted ";
            cin >> data;
            dll.insetAtEnd(data);
            break;
        case 6:
            dll.deleteAtEnd();
            break;
        case 7:
            cout << "Enter data to be inserted.";
            cin >> data;
            cout << "Enter position to be inserted.";
            cin >> pos;
            dll.insetAtPosition(data, pos);
            break;
        case 8:
            cout << "Enter position to be deleted.";
            cin >> pos;
            dll.deleteAtPosition(pos);
            break;
        }
        cout << "length of list is " << dll.length << endl;
        cout << endl
             << "Do you wish to continue? ";
        cin >> ans;

    } while (ans == "y" || ans == "Y");

    return 0;
}