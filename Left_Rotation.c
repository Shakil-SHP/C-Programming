#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arra[n],d,swap;
    scanf("%d",&d);
    for(i=0;i<n;i++)
        scanf("%d ",&arra[i]);
    for(i=0;i<d;i++){
        for(j=0;j<n-1;j++){
            swap=arra[j];
            arra[j]=arra[j+1];
            arra[j+1]=swap;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arra[i]);
    return 0;
}

/*
OR

*/
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arra[n],d;
    scanf("%d",&d);
    for(i=0;i<n;i++)
        scanf("%d ",&arra[i]);
    for(i=0;i<d;i++){
        for(j=0;j<n-1;j++){
            arra[j]=arra[j]-arra[j+1];
            arra[j+1]=arra[j+1]+arra[j];
            arra[j]=arra[j+1]-arra[j];
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arra[i]);
    return 0;
}
