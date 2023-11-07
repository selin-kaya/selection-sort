#include <stdio.h>

void printfArray(int *a, int size)
{
  int i;
  printf(" %d ",a[0]);
  for(i=1;i<size;i++)
    {
      printf("- %d ", a[i]);
    }
}


void selectionSort(int *arr, int size)
{
  int i,j,minIndex;
  for(i=0;i<size;i++)
    {
      minIndex=i;
      for(j=i+1;j<size;j++)
        {
           if(arr[minIndex]>arr[j])
           {
             minIndex=j;
           }
        }
      int temp=arr[i];//14
      arr[i]=arr[minIndex];
      arr[minIndex]=temp;
      printf("\niteration %d: ",i+1);
      printfArray(arr,size);
      //printf("\n");
    }  
}


int main(void) {

int array[]={14,5,19,2,24,36,1};
selectionSort(array,7);

  return 0;
}