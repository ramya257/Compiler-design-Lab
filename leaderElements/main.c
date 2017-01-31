#include <stdio.h>
#include <stdlib.h>
void printLeaderElements(int arr[],int n)
{
    int maximum =  arr[n-1];
    int i;

    printf("%d ", maximum);

    for(i = n-2; i >= 0; i--)
    {
        if(maximum < arr[i])
        {
           printf("%d ", arr[i]);
           maximum = arr[i];
        }
    }
}

int main()
{
    int arr[]={16,22,25,17,19,3,10,4,5,2};
    int n;
  printf("Leader elements are:");
    n = sizeof(arr)/sizeof(arr[0]);
  printLeaderElements(arr,n);
  return 0;
}

