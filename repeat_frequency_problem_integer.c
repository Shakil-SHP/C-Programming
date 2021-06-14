#include<stdio.h>

int main() {
    int n;
    printf("Enter the vaule of array:\n");
    scanf("%d",&n);
    int arra[n],i,j;
    printf("Enter %d numbers :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++){
            int count=0;
            for(j=0;j<i;j++){
                if(arra[i]==arra[j]){
                    count=-1;
                    break;
                }
            }
        if(count==0){
        for(j=0;j<n;j++){
            if(arra[i] == arra[j]){
                count=count+1;
            }
        }

         printf("%d - %d\n",arra[i],count);
    }
    }
return 0;
}
