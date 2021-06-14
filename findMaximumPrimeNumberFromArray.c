#include<stdio.h>

int temp[50];
int count = 0;

int primeNumber(int arra[],int arraSize, int index)
{
    //Terminating Condition/ Base case
    if(index >= arraSize)
        return -1;
    else
    {
        int prime;
        //Prime number checking
        prime = isPrime(arra[index], arra[index]/2);

        if(prime == 1)
        {
            printf("\n%d is a prime number\n",arra[index]);
            temp[count] = arra[index];
            count++;
        }
        else
            printf("\n%d is not a prime number\n",arra[index]);
        //Divide and reduce
        return primeNumber(arra, arraSize, index+1);
    }
}

int isPrime(int n, int i)
{
    if(i == 1)    //Terminating Condition/ Base case
        return 1;
    else
    {
        if(n%i==0)   //Terminating Condition/ Base case
            return 0;
        else
            isPrime(n, i-1);  //recursive call
    }
}

int findMaximumFromArray(int lowIndex, int highIndex)
{
    if(lowIndex == highIndex)     //Terminating Condition/ Base case
        return temp[highIndex];
    else
    {
        int firstNumber,secondNumber,maxValue;
        //Divide part
        firstNumber = findMaximumFromArray(lowIndex+1,highIndex);
        secondNumber = findMaximumFromArray(lowIndex,lowIndex);
        //combine part
        maxValue = combine(firstNumber, secondNumber);
        return maxValue;
    }
}

int combine(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int arraLen;
    printf("Enter the size of the array : \t");
    scanf("%d",&arraLen);
    int arra[arraLen];
    printf("\nInput %d integer numbers :\t",arraLen);
    for(int i=0; i < arraLen; i++)
        scanf("%d",&arra[i]);

    primeNumber(arra, arraLen, 0);
    for(int i=0; i < count; i++)
        printf("\nPrime Numbers = %d\t",temp[i]);

    printf("\n\nMaximum Prime Number = %d\n",findMaximumFromArray(0, count));
    return 0;
}
