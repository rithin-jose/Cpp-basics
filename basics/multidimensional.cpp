#include<iostream>
#include <vector>

using namespace std;


int main()
{
    //2D array using conventional method
    int a[10][10],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //2d Array using vector
    vector<vector<int>> V;
    vector<int> A,B,C;
    A.push_back(1);
    A.push_back(2);
    A.push_back(3);
    B.push_back(1);
    B.push_back(1);
    B.push_back(2);
    C.push_back(2);
    C.push_back(3);
    C.push_back(3);

    V.push_back(A);
    V.push_back(B);
    V.push_back(C);

    for (int i = 0; i < V.size(); i++) { 
        for (int j = 0; j < V[i].size(); j++) 
            cout << V[i][j] << " "; 
        cout << endl; 
    } 
    return 0;
}