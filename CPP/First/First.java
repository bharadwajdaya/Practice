import java.util.*;
public class First{
    public static void main(String[] args)
    {
        String tickets="";
        int booked=0;
        int two=0;
        Scanner reader=new Scanner(System.in);
        int num_of_tic=0;
        System.out.println("Number of tickets");
        num_of_tic=reader.nextInt();
        int remain=num_of_tic;
        System.out.println("Enter the tickets separated by ,");
        reader.nextLine();
        tickets=reader.nextLine();
        String _temp[]=tickets.split(",");
        ArrayList<Integer> arr=new ArrayList<>();
        
        for(int i=0;i<_temp.length;i++)
        {   
            arr.add(Integer.parseInt(_temp[i]));
        }
        //The loop will keep note of number of customers booking the ticket
        for(booked=0;booked<arr.size()&& remain>0 ;booked++)
        {
            int _t=arr.get(booked);
            if(remain-_t>=0)
            {
                remain=remain-_t;
                if(_t>1)
                {
                    two++;
                }
            }
            else 
            {
                //if remaining tickets - wanted tickets by customer is negative The loop has to break as there will be no more tickets to sell
                //As the remaining tickets<wanted tickets remain will become 0 & if remaining tickets is more than 1 No of customer booked more than one ticket should be increased 
                if(remain>1)
                {
                    two++;
                }
                remain=0;
                booked++;
                break;
            }
            
        }
        System.out.println("No of customer booked the ticket: "+booked);
        System.out.println("No of customer booked more than one ticket: "+two);
    }
}
//Test Cases Tested
//1 Number of tickets
//      12
//      Enter the tickets separated by ,
//      1,1,9,2,1,5,3,2 
//      No of customer booked the ticket: 4
//      No of customer booked more than one ticket: 1
//2 Number of tickets
//      10
//      Enter the tickets separated by ,
//      2,5,3,4,1,2
//      No of customer booked the ticket: 3
//      No of customer booked more than one ticket: 3

//3 Number of tickets
//      10
//      Enter the tickets separated by ,
//      5,6,4
//      No of customer booked the ticket: 2
//      No of customer booked more than one ticket: 2
//4 Number of tickets
//      0
//      Enter the tickets separated by ,
//      1,2,3
//      No of customer booked the ticket: 0
//      No of customer booked more than one ticket: 0
//5 Number of tickets
//      20
//      Enter the tickets separated by ,
//      19,2
//      No of customer booked the ticket: 2
//      No of customer booked more than one ticket: 1