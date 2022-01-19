#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> _first;
    vector<int> _second;
    vector<int> _third;

    for(int i=0;i<7;i++)
    {
        _first.push_back(i);
    }
    for(auto itr=_first.rbegin();itr!=_first.rend();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;
    it=_first.begin()+1;

    _second.assign(it,_first.end()-1);
    for(auto itr=_second.rbegin();itr!=_second.rend();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    int _arr[]={1,2,3,4,5,6};
    int _arr_size=sizeof(_arr)/sizeof(int);
    cout<<_arr_size<<"\n";
    cout<<endl;
    _third.assign(_arr,_arr+_arr_size);

    for(auto itr=_third.rbegin();itr!=_third.rend();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<<<" \n";
    cout<<"Is Empty "<<_first.empty()<<endl;
    return 0;
}