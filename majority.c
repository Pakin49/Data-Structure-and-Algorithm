#include <stdio.h>

int main()
{   

    int n = 10, maj, count = 0;//3
    int data[n];//1

        //loop through array to find majority  
        //This loop is O(n) because everything inside the loop is O(1)
        for(int i=0;i<n;i++) //n+1 0 1 2 3 4 5
        {   
            if(count==0) //n 
                maj = data[i];//n
            if(data[i]==maj)//n
                count++;//n
            else//n
                count--;//n
        }  

        //check the count of the element that might be majority
        //This loop is O(n) because everything inside the loop is O(1)
        int mcount=0;//1
        for(int i=0;i<n;i++)//n+1
            if(data[i]==maj)//n
                mcount++;//n
        
        //check if it is majority
        //O(1)
        if (mcount>(n/2))//1
            printf("%d is a majority\n",maj);//1
        else //1
            printf("There is no majority");//1

    return 0;
    //T1(n)=10n+11
}