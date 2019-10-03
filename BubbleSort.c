#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements in Array\n");
    scanf("%d",&n);
    printf("Enter Elements of Array\n");
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Sorted Array is:\n");
    
    //Sorting Algorithm
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //Printing Sorted Elements
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}
