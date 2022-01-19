#include<stdio.h>
int main(){
    int num=0;
    
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    { 
        int _line=i+1;
        int to_print=_line;
        int temp_space=num-i-1;
        int backward=num-temp_space-1;
        for(int _i=0;_i<temp_space;_i++)
        {
            printf(" ");
        }
        for(int _i=0;_i<num-temp_space;_i++)
        {
            printf("%d",to_print);
            to_print++;
        }
        to_print--;
        for(int _i=backward;_i>0;_i--)
        {
            printf("%d",--to_print);
        }
        printf("\n");
    }
}