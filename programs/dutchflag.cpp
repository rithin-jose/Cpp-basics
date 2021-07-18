#include<iostream>

using namespace std;
void swapper(int array[],int size,int firstIndex,int secondIndex);
int main()
{
    int array[] = {0,1,0,1,2,1,2,2,2,0,0,0};
    int size =  sizeof(array)/sizeof(array[0]);

    int low,mid,high;

    low = mid = 0;
    high = size-1;

    while(mid <= high)
    {
        switch(array[mid])
        {
            case 1:
                    swapper(array,size,low,mid);
                    low++;
                    mid++;
                    break;

            case 0:
                    mid++;
                    break;

            case 2:
                    swapper(array,size,mid,high);
                    high--;
                    break;
        }
    }

    for(int i=0; i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}

void swapper(int array[],int size,int firstIndex,int secondIndex)
{
    int temp;
    temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
    // array[firstIndex] = array[firstIndex] + array[secondIndex];   
    // array[secondIndex] = array[firstIndex] - array[secondIndex];   
    // array[firstIndex] = array[firstIndex] - array[secondIndex];   
}