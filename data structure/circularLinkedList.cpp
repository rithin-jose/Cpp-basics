#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next = NULL;
}

class list
{
    Node *last;

    public:
        list()
        {
            start = NULL;
            last = NULL;
        }

        void addNodeToBegining(int data);
        void deleteNodeToBegining();
        void traverseNode();
        void addNodeToLast(int data);
        void deleteNodeAtLast();
        void insertionNodeAtPosition(int pos);
        void deleteNodeAtPosition(int pos);
};


void list::addNodeToBegining(){
    if(last == NULL){
        
    }
}


int main()
{
    int ch,data;
    list ll;
    string ans;
    int pos;
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
            cout << "Enter the data to be inserted ";
            cin >> data;
            ll.addNodeToBegining(data);
            break;
        case 2:
            ll.deleteNodeToBegining();
            break;
        case 3:
            ll.traverseNode();
            break;
        case 4:
            cout << "Enter the data to be inserted ";
            cin >> data;
            ll.addNodeToLast(data);
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