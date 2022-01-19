#include<stdio.h>
int main(){
    int n=5;
    int sp=n/2;
    int st=1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            printf(".");
        }
        int count=(st/2)+1;
        for(int k=1;k<=st;k++)
        {
            printf("%d",k);
            if(k<=st/2){
                count--;
            }
            else{
                count++;
            }
        }
        printf("\n");
        if(i<=n/2)
        {
            sp=sp-1;
            st=st+2;
        }
        else
        {
            sp=sp+1;
            st=st-2;
        }
    }
    return 0;
}