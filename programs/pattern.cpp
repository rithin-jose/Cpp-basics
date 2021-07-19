#include<iostream>

using namespace std;

int main()
{
    int i,j,k;
    // rectangle

    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    int row=4,col=4;



    // hollow rectangle
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==1 || i== row || j== 1 || j== col)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }

    cout<<endl<<endl;

    // inverted triangle
    for(i=5;i>= 0;i--)
    {
        for(j=0;j<=i;j++)
        {

            cout<<"* ";
        }
        cout<<endl;
    }

    // inverted triangle after 180 rotation
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=4-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }



    return 0;
}

