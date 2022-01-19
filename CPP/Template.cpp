#include<iostream>
using namespace std;


//#1
// template <typename T>
// T myMax(T x,T y)
// {
//     return (x>y)?x:y;
// }


//#2
// template <class T>
// void bubblesort(T a[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=n-1;i<j;j--)
//         {
//             if(a[j]<a[j-1])
//             {
//                 swap(a[j],a[j-1]);
//             }
//         }
//     }
// }

template<typename T>
class Array{
    private:
        T *ptr;
        int size;
    public:
        Array(T arr[],int s);
        void print();
};

template <typename T>
Array<T>::Array(T arr[],int s){
    ptr=new T[s];
    size=s;
    for(int i=0;i<size;i++)
    {
        ptr[i]=arr[i];
    }
}

template <typename T>
void Array<T>::print(){
    for(int i=0;i<size;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}

int main()
{
    //#1
    // cout<<myMax<int>(3,7)<<endl;
    // cout<<myMax<double>(3.0,7.0)<<endl;

    int arr[5]={1,2,3,4,5};
    Array<int> a(arr,5);
    a.print();
    return 0;
}