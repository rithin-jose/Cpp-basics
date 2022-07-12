/*****************************************************************************************
 *  Note:
 *  The code is written with each function being independent of each other.
 *  A much refined and DRY verion can be generted by making dependent code.
*****************************************************************************************/ 


#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *link;
};

class list
{
    Node *start;
    Node *last;

public:
    list()
    {
        start = NULL;
        last = NULL;
    }

    void addNodeToBegining();
    void deleteNodeToBegining();
    void traverseNode();
    void addNodeToLast();
    void deleteNodeAtLast();
    void insertionNodeAtPosition(int pos);
    void deleteNodeAtPosition(int pos);
    void addNodeToLast2(int num);
};

// insertion at the begining
void list::addNodeToBegining()
{
    Node *nodepointer;
    nodepointer = new Node;

    cout << "Enter data: ";
    cin >> nodepointer->data;

    if (start == NULL)
    {
        last = nodepointer;
        nodepointer->link = NULL;
    }
    else
    {
        nodepointer->link = start;
    }
    start = nodepointer;

    cout << "Data entred" << endl;
}

// deletion at the begining
void list::deleteNodeToBegining()
{
    if (start == NULL)
    {
        cout << "Cannot delete list is empty" << endl;
    }
    else
    {
        Node *temp;
        temp = start;
        cout << "Data to be deleted is " << temp->data << endl;

        if (temp->link == NULL)
        {
            last = temp->link;
        }
        start = temp->link;
        delete temp;
    }
}

// trsversing nodes
void list::traverseNode()
{
    if (start == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *temp;
        for (temp = start; temp != NULL; temp = temp->link)
        {
            cout << temp->data << " -> ";
        }
        cout << "NULL" << endl;
    }
}

// add node at the end
void list::addNodeToLast()
{
    Node *nodeptr;
    nodeptr = new Node;
    cout << "Enter the data: ";
    cin >> nodeptr->data;

    if (start == NULL)
    {
        start = nodeptr;
    }
    else
    {
        last->link = nodeptr;
    }
    last = nodeptr;
    last->link = NULL;
}

// deleting node at the end
void list::deleteNodeAtLast()
{
    if (start == NULL)
    {
        cout << "Can not delete node list is empty." << endl;
    }
    else
    {
        Node *temp;
        for (temp = start; temp->link != last; temp = temp->link)
        {
        }

        cout << "Information to be deleted" << last->data << endl;
        delete last;
        last = temp;
        last->link = NULL;
    }
}

// add node at position
void list::insertionNodeAtPosition(int pos)
{
    Node *nodeptr;
    nodeptr = new Node;
    cout << "Enter the data: ";
    cin >> nodeptr->data;

    bool outOfBound = false;

    if(pos == 0 && start==NULL){
        nodeptr->link=start;
        start=nodeptr;
        last=nodeptr;
    }

    else if(pos == 0 && start!=NULL){
        nodeptr->link=start;
        start=nodeptr;
    }

    else if(pos>0 && start==NULL){
        cout<<"List is empty."<<endl;
    }

    else if(pos>0 && start!=NULL){
        Node* temp=start;

        for(int i=1;i<pos;i++){
            if(temp->link != NULL){
                temp=temp->link;
            }
            else{  
                outOfBound=true; 
                break;
            }
        }

        if (outOfBound){
            cout<<"Position is out of bound."<<endl;
        }
        else{
            if (temp->link == NULL){
                nodeptr->link=NULL;
                temp->link=nodeptr;
                last=nodeptr;
            }
            else{
                nodeptr->link=temp->link;
                temp->link=nodeptr;
            }
        }
    }

}

// deleting node at position
void list::deleteNodeAtPosition(int pos)
{
    // if(start == NULL){
    //     cout<<"Can not delete node list is empty."<<endl;
    // }
    // else{
    //     Node* temp;
    //     Node* temp2;
    //     temp=start;

    //     for(int i=1; i<pos-1;i++){
    //         temp=temp->link;
    //     }

    //     temp2 = temp->link;
    //     temp->link = temp2->link;
    //     delete temp2;
    //     cout<<"Data deleted at position "<<pos<<endl;
    // }
}

// add node at the end
void list::addNodeToLast2(int num)
{
    Node *nodeptr;
    nodeptr = new Node;
    cout << "Enter the data: ";
    nodeptr->data=num;

    if (start == NULL)
    {
        start = nodeptr;
    }
    else
    {
        last->link = nodeptr;
    }
    last = nodeptr;
    last->link = NULL;
}

int main()
{
    int ch;
    list ll;
    string ans;
    int pos;

    // to create a linked list uncomment the following code
    // ll.addNodeToLast2(1);
    // ll.addNodeToLast2(2);
    // ll.addNodeToLast2(3);
    // ll.addNodeToLast2(4);
    // ll.addNodeToLast2(5);

    do
    {
        cout << "Enter your choice" << endl;
        cout << "1. Insertion at begining" << endl;
        cout << "2. Deletion at begining" << endl;
        cout << "3. Trverse node" << endl;
        cout << "4. Insert node at last" << endl;
        cout << "5. Deletion node at last" << endl;
        cout << "6. Insert node at position" << endl;
        cout << "7. Deletion node at position" << endl;

        cin >> ch;

        switch (ch)
        {
        case 1:
            ll.addNodeToBegining();
            break;
        case 2:
            ll.deleteNodeToBegining();
            break;
        case 3:
            ll.traverseNode();
            break;
        case 4:
            ll.addNodeToLast();
            break;
        case 5:
            ll.deleteNodeAtLast();
            break;
        case 6:
            cout << "Enter the position ";
            cin >> pos;
            ll.insertionNodeAtPosition(pos);
            break;
        case 7:
            cout << "Enter the position ";
            cin >> pos;
            ll.deleteNodeAtPosition(pos);
            break;

        default:
            cout << "Wrong Choice";
            break;
        }
        cout << "Do you want to continue? ";
        cin >> ans;
    } while (ans == "y" || ans == "Y");

    return 0;
}

