#include<stdio.h>
    //array linear search & delete
int main(){
    int n;
    printf("Enter the size : \n");
    scanf("%d",&n);
    int arra[n], i;
    printf("Enter %d elements : \n",n);
        for(i=0;i<n;i++){
            scanf("%d",&arra[i]);
        }
    printf("So the elements are : \n");
        for(i=0;i<n;i++){
            printf("%d\t",arra[i]);
        }
    //Search part start
    int srch,newindx=-1;
    printf("\nEnter the element you want to search : \n");
    scanf("%d",&srch);
        for(i=0;i<n;i++){
            if(arra[i]==srch){
                newindx=i;
                break;
            }
        }
    //Delete part start
    if(newindx == -1){
        printf("Element is not found");
    }else if(newindx == n-3){
                for(i=newindx+2;i<n;i++)
                    arra[i]=arra[i+1];
                    arra[n-1]= '/0';
                for(i=0;i<n-1;i++)
                    printf("%d\t",arra[i]);
    }else if(newindx < n-2){
                for(i=newindx+2;i<n;i++)
                    arra[i]=arra[i+1];
                    arra[n-2]= '/0';
                for(i=0;i<n-2;i++){
                    printf("%d\t",arra[i]);
                        }
    }else if(newindx == n-1 || newindx == n-2){
                        arra[n-1]= '/0';
                for(i=0;i<n-1;i++){
                    printf("%d\t",arra[i]);
                        }
                    printf("\nNo Double Next Found.\n");
    }else{
                    printf("\nInvalid \n");
            }
return 0;
}
