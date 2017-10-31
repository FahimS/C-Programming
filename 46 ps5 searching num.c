/**
ps:5 search a number from an array using linear search

input:
       6
       1 5 8 9 4 3
       5

       7
       1 2 3 4 5 6 7


output:
        case 1: 2
        case 2: No
*/

#include<stdio.h>
int main()
{
    int array[100],i,T=1,key,n,loc,ck;

    while(scanf("%d",&n)!=EOF)
    {


        for(i=0; i<n; i++)
            scanf("%d",&array[i]);
        scanf("%d",&key);
        // loc=0;
        for(i=0; i<n; i++)
        {
            if(array[i]==key)
            {
                //loc=i+1;
                break;
            }
        }
        printf("case %d: ",T);
        T++;
        //if(loc==0)
        if(i==n)
        {
            printf("No\n");
        }
        else
            printf("%d",i+1/**loc*/);
    }

    return 0;
}

