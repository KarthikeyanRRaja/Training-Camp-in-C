/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
int main()
{
    int i,j,t,k;
    scanf("%d",&t);
    int R[t],C[t],eve[t],odd[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&R[i]);
        scanf("%d",&C[i]);
        eve[i]=0;
        odd[i]=0;
        int arr[R[i]][C[i]];
        for(j=0;j<R[i];j++)
        {
            for(k=0;k<C[i];k++)    
            {
                if(k<=j)
                {
                    arr[j][k]=j+1;
                }
                else
                {
                    arr[j][k]=0;
                }
                
            }
        }
        for(j=0;j<R[i];j++)
        {
            for(k=0;k<C[i];k++)    
            {
                if(arr[j][k]!=0)
                {
                if(arr[j][k]%2==0)
                {
                    eve[i]=eve[i]+1;
                }
                else
                {
                    odd[i]=odd[i]+1;
                }
                }
                else
                {
                    break;
                }
                
            }
        }
        
        
    }
    for(i=0;i<t;i++)
    {
    	printf("%d %d\n",eve[i],odd[i]);
	}
    
}

