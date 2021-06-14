#include <stdio.h>
int array[50];
int counter =0 ;


int collatzFunction(int n , int count)
{
    printf("%d:%d\n",count,n);
    array[count-1] = n;

    if(n<=1)
    {
        printf ("\tThe number converges to one\n");
        printf("\nThe number takes %d steps to converge to one\n",count);
        counter= count;

        return 1;
    }
    else if(n%2==0)
    {
        printf("\tThe number is even\n");
        count++;
        return collatzFunction (n/2,count);
    }
    else
    {
        printf("\tThe number is odd\n");
        count++;
        return collatzFunction (n*3+1,count);
    }
}

int main() {
    int n,count=1;
    printf("Enter a number : \t");
    scanf("%d",&n);
    collatzFunction (n,count);

    printf("The Array of collatz sequence is  : ");
    for(int i=0;i<counter;i++)
        printf(" %d ",array[i]);
    recursiveLinearSearch(array, counter, 0);

    return 0;
}

int recursiveLinearSearch(int arra[],int arraSize, int index)
{
    if(index >= arraSize)
        return -1;
    else
        {
            int primeNum ;
            if(arra[index] != 1)
                primeNum = primeNumber(arra[index]);
            if(primeNum==0)
                printf("\n\n%d is a prime number\n",arra[index]);

        return recursiveLinearSearch(arra, arraSize, index+1);
    }

}


int primeNumber(int num)
{
    for(int i=2; i <= num/2; i++){
        if(num % i == 0)
            return 1;
    }
    return 0;
}

