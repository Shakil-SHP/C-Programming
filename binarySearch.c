#include<stdio.h>

int main(){
int size;
printf("Enter array size : \t");
scanf("%d",&size);
char arra[size];
printf("\nEnter %d elements : \n",size);

for(int i=0;i<size;i++)
    scanf("%s",&arra[i]);
printf("\nThe elements are : \t");
for(int i=0;i<size;i++)
printf("%c\t",arra[i]);

char searchValue = 'a';
int first,last,middle;
first = 0;
last = size - 1;
middle = (first + last) / 2;

while(first <= last){
    if(searchValue == arra[middle]){
        printf("\nElement found in %d index",middle);
        break;
    }
    else if(arra[middle] > searchValue)
        last = middle - 1;
    else
        first = middle + 1;
    middle = (first + last) / 2;
}
if(first > last)
    printf("\nElement not found");
return 0;
}
