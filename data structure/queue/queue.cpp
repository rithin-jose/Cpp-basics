#include <iostream>

using namespace std;

int main()
{
    const int size = 10;
    int queue[size], front=-1,rear=-1, ch, data;
    string ans;

    do{
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "Entre your Choice: ";

        cin>>ch;

        switch(ch){
            case 1:
                if(rear >= size-1)
                    cout<<"Queue Overflow"<<endl;

                else if(front==-1){
                    front=rear=0;
                    cout<<"Enter data: ";
                    cin>>data;
                    queue[rear]=data;
                    cout<<"Data entred"<<endl;
                }
                else{
                    rear++;
                    cout<<"Enter data: ";
                    cin>>data;
                    queue[rear]=data;
                    cout<<"Data entred"<<endl;
                }

                break;
            case 2:
                if(rear == -1 && front ==-1)
                    cout<<"Queue Underflow"<<endl;

                else if(front
                >rear)
                    front=rear-1;

                else{
                    cout<<"Element to be deleted "<<queue[front]<<endl;
                    front++;
                }
                break;
            case 3:
                if(rear == -1 && front ==-1)
                    cout<<"Queue Underflow"<<endl;
                
                else{
                    for(int i=front;i <= rear;i++){
                        cout<<queue[i]<<" ";
                    }
                    cout<<endl;
                }

                break;
            default:
                cout << "Wrong Choice";
                break;
        }
        cout << "Do you wish to continue? ";
        cin >> ans;
    }while(ans=="y"||ans=="Y");

    return 0;
}