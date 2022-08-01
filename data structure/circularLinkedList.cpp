#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next = NULL;
};

class list
{
    Node *last;

    public:
        list()
        {
            last = NULL;
        }

        void addNodeToBegining(int data);
        void deleteNodeAtBegining();
        void traverseList();
        void addNodeToLast(int data);
        void deleteNodeAtLast();
        void insertionNodeAtPosition(int data,int pos);
        void deleteNodeAtPosition(int pos);
};


void list::addNodeToBegining(int data){
    Node* nodeptr;
    nodeptr = new Node;
    nodeptr->data = data;

    if(last == NULL){
        last = nodeptr;
        last->next=nodeptr;
    }
    else{
        nodeptr->next = last->next;
        last->next=nodeptr;
    }
}

void list::deleteNodeAtBegining(){
    Node* temp = last->next;
    if(temp == last)
        last=NULL;

    else
        last->next=temp->next;

    delete temp;
}


void list::traverseList(){
    if(last==NULL)
        cout<<"List is empty"<<endl;
    
    else{
        Node* temp = last->next;

        while (temp!=last)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<temp->data<<" -> front"<<endl;

        temp=NULL;
    }
}

void list::addNodeToLast(int data){
    Node* nodeptr;
    nodeptr = new Node;
    nodeptr->data = data;

    if(last == NULL){
        addNodeToBegining(data);
    }
    else{
        nodeptr->next = last->next;
        last->next=nodeptr;
        last = nodeptr;
    }
}

void list::deleteNodeAtLast(){
    if(last == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        Node* temp = last->next;
        if(temp == last)
            last=NULL;
        else{
            while (temp->next != last)
            {
                temp=temp->next;
            }

            last=temp;
            temp=temp->next;
            last->next = temp->next;
        }

        delete temp;        
    }
}

void list::insertionNodeAtPosition(int data,int pos){
    Node* nodeptr;
    nodeptr = new Node;
    nodeptr->data = data;
    int flag=0;

    if(last == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        Node* temp = last->next;
        while(temp !=last){
            if(temp->data == pos){
                nodeptr->next = temp->next;
                temp->next=nodeptr;
                flag=1;
                break;
            }
            temp=temp->next;
        }
        if(flag==0){
            cout<<"Could not enter data."<<endl;
        }
        else{
            cout<<"Data inserted."<<endl;
        }
    }
}

void list::deleteNodeAtPosition(int pos){
    if(last == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        Node* temp = last->next;
        Node* temp2;
        int flag=0;
        
        while(temp !=last){
            if(temp->data == pos){
                temp2->next = temp->next;
                delete temp;
                flag=1;
                break;
            }
            temp2=temp;
            temp=temp->next;
            
        }
        if(flag==0){
            cout<<"Could not delete data."<<endl;
        }
        else{
            cout<<"Data deleted."<<endl;
        }
       
    }
}

int main()
{
    int ch,data;
    list ll;
    string ans;
    int pos;

    ll.addNodeToBegining(3);
    ll.addNodeToBegining(2);
    ll.addNodeToBegining(1);

    do  
    {
        cout << "1. Insertion at begining" << endl;
        cout << "2. Deletion at begining" << endl;
        cout << "3. Trverse node" << endl;
        cout << "4. Insert node at last" << endl;
        cout << "5. Deletion node at last" << endl;
        cout << "6. Insert node at position" << endl;
        cout << "7. Deletion node at position" << endl;
        cout << "Enter your choice" << endl;

        cin >> ch;

        switch (ch)
        {
            case 1:
                cout << "Enter the data to be inserted ";
                cin >> data;
                ll.addNodeToBegining(data);
                break;
            case 2:
                ll.deleteNodeAtBegining();
                break;
            case 3:
                ll.traverseList();
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
                cout << "Enter the data after which it needs to be added ";
                cin >> pos;
                cout << "Enter the data to be inserted ";
                cin >> data;
                ll.insertionNodeAtPosition(data,pos);
                break;
            case 7:
                cout << "Enter the data to be deleted";
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