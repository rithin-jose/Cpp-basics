#include<iostream>
#include<fstream>
    // fstream is the header file for file io
    /*
        The program is to perform file operations 
        reading writing updating creating a file etc.
    */
   
using namespace std;

int main()
{
    fstream f1,f2;
    char ch;
        /*
            ios::out opens file or creats file and opens it in output mode or write mode 
            ios::app opens file in append mode
            ios::in opens file in input mode
        */
    f1.open("test.txt",ios::out|ios::app);
    f1.open("test.txt",ios::in);

        /*
            is_open returns 1 if file is open
            and returns 0 if fole is closed
        */
    if(f1.is_open())
    {
        cout<<"file is open"<<endl;
    }
    else
    {
        cout<<"file is closed"<<endl;
    }

        /*
            writing to a file 
        */ 
    
    f1<<"test ";
    f1<<"to see ";
    f1<<"if append works";

    f1<<1;

    while(!f2.eof())
    {
        f2>>ch;
        cout<<ch;
    }

    f1.close();
     if(f1.is_open())
    {
        cout<<"file is open"<<endl;
    }
    else
    {
        cout<<"file is closed"<<endl;
    }


    return 0;
}