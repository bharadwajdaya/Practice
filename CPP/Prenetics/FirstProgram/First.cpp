#include<iostream>
using namespace std;
int main(){
    int num_of_tickets=0;
    int num_of_customers=0;
    int *cust_tick_arr;

    cout<<"enter number of tickets \n";
    cin>>num_of_tickets;

    int available_tickets=num_of_tickets;
    int booked_num=0;
    int booked_two=0;
    
    cout<<"enter number of customers \n";
    cin>>num_of_customers;

    cust_tick_arr=(int*)malloc(sizeof(int)*num_of_customers);

    for(int i=0;i<num_of_customers;i++)
    {
        cin>>cust_tick_arr[i];
    }

    int i=0;
    int sum=0;
    while(i<num_of_customers && sum+cust_tick_arr[i]<=num_of_tickets)
    {   
        sum+=cust_tick_arr[i];
        cust_tick_arr[i]>=2?booked_two++:0;
        booked_num++;
        i++;
    }
    if(num_of_tickets-sum>0)
    {
        if(cust_tick_arr[i]>=2)
        {
            booked_two++;
        }
        booked_num++;
    }
    cout<<"No of customer booked the ticket "<<booked_num<<endl;
    cout<<"No of customer booked more than one ticket "<<booked_two<<endl;
    return 0;
}