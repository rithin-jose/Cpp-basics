#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* link;
};

class list{
    Node* start;
    public:
        list(){
            start=NULL; 
        }

        void addNodeToBegining();
        void deleteNodeToBegining();
        void traverseNode();
        void addNodeToLast();
};

// insertion at the begining 
void list::addNodeToBegining(){
    Node* nodepointer;
    nodepointer = new Node;

    cout<<"Enter data: ";
    cin>>nodepointer->data;

    nodepointer->link = start;
    start=nodepointer;
    cout<<"Data entred"<<endl;
}

// deletion at the begining 
void list::deleteNodeToBegining(){
    if(start == NULL){
        cout<<"Cannot delete list is empty";
    }
    else{
        Node* temp;
        temp = start;
        cout<<"Data to be deleted is "<<temp->data;
        start = temp->link;
        delete temp;
    }
}

// trsversing nodes 
void list::traverseNode(){
   if(start == NULL){
        cout<<"List is empty"<<endl;
   }
   else{
        Node* temp;
        for(temp= start;temp!=NULL;temp=temp->link){
            cout<<temp->data<<" ";
        }
        cout<<endl;
   }
}

// add node at the end
void list::addNodeToLast(){
   
}

int main(){
    int ch;
    list ll;
    string ans;

    do{
        cout<<"Enter your choice"<<endl;
        cout<<"1. Insertion at begining"<<endl;
        cout<<"2. Deletion at begining"<<endl;
        cout<<"3. Trverse node"<<endl;
        cout<<"4. Insert node at last"<<endl;

        cin>>ch;

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
            
            default:
                cout<<"Wrong Choice";
                break;
        }
        cout<<"Do you want to continue?";
        cin>>ans;
    }while(ans == "y" || ans=="Y");
    
    return 0;
}