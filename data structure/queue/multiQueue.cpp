#include<iostream>

using namespace std;

int main()
{
    int n, ch, i, data;
    char ans;
    int size = 10;
    int *queue = new int[size];

        cout << "Enter no of stack: ";
    cin >> n;

    int *front = new int[n];
    int *rear = new int[n];
    int *boundary = new int[n+1];

    front[0] = rear[0] = boundary[0] = -1;
    
    return 0;
}