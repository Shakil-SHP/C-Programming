#include<stdio.h>

int main() {
    int n;
    printf("Enter the vaule of array:\n");
    scanf("%d",&n);
    char arra[n];
    int i,j;
    printf("Enter %d character :\n",n);
    for(i=0;i<n;i++)
        scanf("%s",&arra[i]);

    for(i=0;i<n;i++){
            int count=0;
            for(j=0;j<i;j++){
                if(arra[i]==arra[j]){
                    count=1;
                    break;
                }
            }
        if(count==0){
        for(j=0;j<n;j++){
            if(arra[i] == arra[j]){
                count=count+1;
            }
        }

         printf("%c - %d\n",arra[i],count);
    }
    }
return 0;
}
