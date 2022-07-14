#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* prev = NULL;
    Node* next = NULL;
};

class list{
    Node* head;
    Node* last;

    public:
        list(){
            head=NULL;
            last=NULL;
        }

        void insetAtBegining(int data);
        void deleteAtBegining();
        void traverseForwards();
        void traverseBackwards();
        void insetAtEnd(int data);
        void deleteAtEnd();
        void insetAtPosition(int data,int pos);
        void deleteAtPosition(int pos);
};


        void list::insetAtBegining(int data){
            Node* nodeptr;
            nodeptr = new Node;
            nodeptr->data=data;

            if(head == NULL){
                head=nodeptr;
                last=nodeptr;
            }

            else{
                head->prev=nodeptr;
                nodeptr->next=head;
                head=nodeptr;
            }

            cout<<"Data entred"<<endl;
        }

        void list::deleteAtBegining(){
            if(head == NULL){
                cout<<"List is empty."<<endl;
            }
            else{
                Node* temp;
                temp=head;
                head=head->next;
                head->prev=NULL;
                delete temp;
                cout<<"Node  deleted";
            }
        }

        void list::traverseForwards(){
            if(head==NULL){
                cout<<"List is empty."<<endl;
            }

            else{
                Node* temp;
                for (temp = head; temp != NULL; temp = temp->next)
                {
                    cout << temp->data << " -> ";
                }

                cout<<"NULL";
            }
        }

        void list::traverseBackwards(){
            if(head==NULL){
                cout<<"List is empty."<<endl;
            }

            else{
                Node* temp;
                for (temp = last; temp != NULL; temp = temp->prev)
                {
                    cout << temp->data << " -> ";
                }

                cout<<"NULL";
            }
        }

        void list::insetAtEnd(int data){

        }

        void list::deleteAtEnd(){

        }

        void list::insetAtPosition(int data,int pos){

        }

        void list::deleteAtPosition(int pos){

        }

int main(){
    int ch,data,pos;
    list dll;
    string ans;

    do{
        
        cout << "1. Insertion at begining" << endl;
        cout << "2. Deletion at begining" << endl;
        cout << "3. Trverse node Forwards" << endl;
        cout << "4. Trverse node Backwards" << endl;
        cout << "5. Insert node at last" << endl;
        cout << "6. Deletion node at last" << endl;
        cout << "7. Insert node at position" << endl;
        cout << "8. Deletion node at position" << endl<< endl;
        cout << "Enter your choice ";

        cin>>ch;

        switch(ch){
            case 1:
                    cout<<"Enter the data to be inserted ";
                    cin>>data;
                    dll.insetAtBegining(data);
                    break;
            case 2:
                    cout<<"Enter the position to be deleted ";
                    cin>>pos;
                    dll.deleteAtBegining(pos);
                    break;
            case 3:
                    dll.traverseForwards();
                    break;
            case 4:
                    dll.traverseBackwards();
                    break;
        }

        cout<<endl<<"Do you wish to continue? ";
        cin>>ans;

    } while (ans == "y" || ans == "Y");

    return 0;
}