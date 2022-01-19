#include<iostream>
using namespace std;
class Circle{
    private:
        double radius;
    public:
        double compute_area(double r){
            radius=r;
            return 3.14*r*r;
        }
};
int main(){
    Circle obj;
    cout<<obj.compute_area(1)<<"\n";
    return 0;
}