/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>



int main()
{
    int rows,cols,i,j;
    printf("Enter the number of rows");
    scanf("%d",&rows);
    printf("enter the number of columns");
    scanf("%d",&cols);
    for (int i=1;i<=rows;i++)
    {
        for(int j=cols;j>cols-i;j--)
        {
            printf("%d",j);
        }
        for(int j=1;j<=cols-i;j++)
        {
            printf("%d",(rows-i+1));
        }
        printf("\n");
    }
    return 0;
    
}
