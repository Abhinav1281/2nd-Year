#include <stdio.h>
#include <stdlib.h>
void sorter(int arr[],int s)
{
	 int i,temp=0;
    for(i=0;i<s-1;i++)
    {
	    for(int j=0;j<s-i-1;j++)
	    {
	        if(arr[j]>arr[j+1]){
	            temp=arr[j];
                arr[j]=arr[j+1];
	            arr[j+1]=temp;
            }

	    }
	            
    }
   for(i=0;i<s;i++)
   	{
	    printf("%d\t",arr[i]);
	}
}

	int main() 
    {
		int s;
        printf("ENTER SIZE OF ARRAY:");
        scanf("%d",&s);
        int ar[s];
        for(int i=0;i<s;i++)
        {
            printf("ENTER ELEMENTS:");
            scanf("%d",&ar[i]);
        }

		sorter(ar,s);

	}