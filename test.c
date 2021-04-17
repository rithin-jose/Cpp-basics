#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,temp2,temp,count=0;
    int* ptr;

    scanf("%d",&n);
    temp=n;

    if(n<=1000000 && n>0)
    {
        while(n>0)
        {
            temp2 = n%10;
            n=n/10;
            count++;
        }

        ptr = (int*)malloc(count*sizeof(int));

        for (int i = 0; i < count; ++i) 
        {
            ptr[i] = 9-(temp%10);
            temp=temp/10;
        }

        for (int i = count-1; i >= 0; i--) 
        {
            printf("%d",ptr[i]);
        }
    }
    else
    {
        printf("Wrong Input");
    }

    return 0;
}
