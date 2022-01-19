#include<stdio.h>
struct Array{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("Elements are ");
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
    printf("\n"); 
}
void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
}
int main(){
    int n,i;
    struct Array arr={{2,3,4,5,6},10,5};
    Append(&arr,10);
    Display(arr);
    printf("%d",arr.length);
    return 0;
}