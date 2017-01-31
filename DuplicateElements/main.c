#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[50], freq[50];
    int n, i, j,k, count;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }

        if(freq[i]!=0)
        {
            freq[i] = count;
        }
    }

   printf("\nFrequency of all the elements is : \n");
    for(i=0; i<n; i++)
    {
        if(freq[i]!=0)
        {
            printf("element %d :%d times\n", arr[i], freq[i]);
        }
    }
    for (i = 0; i < n; i++) {
      for (j = i + 1; j < n;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < n; k++) {
               arr[k] = arr[k + 1];
            }
            n--;
         } else
            j++;
      }
   }
   printf("array after removing duplicates is:");
   for(i=0;i<n;i++)
   {
   printf("%d ",arr[i]);
   }

    return 0;
    }
