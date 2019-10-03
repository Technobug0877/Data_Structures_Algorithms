#include<stdio.h>
int main() 
{
  int index = -1, n,temp1,temp;
  scanf ("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf ("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
      temp = arr[i];
      for(int j = i; j < n; j++)
      {
          
          if(temp > arr[j])
            {
                temp = arr[j];
                index = j;
            }
      }
      temp1 = arr[i];
      arr[i] = temp;
      arr[index] = temp1;
  }
  for(int i = 0; i < n; i++)
  {
      printf("%d ",arr[i]);
  }
  return 0;
}



