#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,string> map;
    map.insert({"Worry","Some"});
    map.insert({"Done","With"});
    map.insert({"Cat","Stans"});

    cout<<"Size "<<map.size()<<endl<<endl;

    for(auto itr=map.begin();itr!=map.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}