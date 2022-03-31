var fs = require('fs');
var path = require('path');
var readline= require('readline');
const { isBuffer } = require('util');
    
f_path = path.join(__dirname, 'AttendanceRegister.json');

var months = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December'];
var days = ['Sun','Mon', 'Tue', 'Wed', 'Thurs', 'Fri', 'Sat'];
fs.readFile(f_path, 'utf-8', function(err,data){
    if (!err) {
        var employees=JSON.parse(data);

        const r_l = readline.createInterface({input: process.stdin,output: process.stdout})
        
        r_l.question("Enter name of the employee\n", name => {
            //If the input employee name is test1 instead of Test1 The output will be the same
            const arr=employees.filter((emp) => emp.employeName.toLowerCase()==name.toLowerCase());
            if(arr.length==0)
            {
                console.log("wrong input");
                r_l.close()
            }
            var obj={};
            arr.map(({employeName,date,dept,checkinTime,checkouttime})=>{
                var in_hr=checkinTime.split(":")[0];
                var _t_in_min=checkinTime.split(":")[1];

                //Test Case: If only hours are given as input
                var in_min=_t_in_min==undefined ? 0 : _t_in_min;
    
                var out_hr=checkouttime.split(":")[0];
                var _t_out_min=checkouttime.split(":")[1];
                var out_min=_t_out_min==undefined ? 0 : _t_out_min;
                var diff_hrs=parseInt(out_hr)-parseInt(in_hr);
                
                if(parseInt(out_hr)>23 || parseInt(in_hr)>23)
                {
                    console.log("Incorrect Time format");
                    return;
                }

                if(parseInt(in_min)>parseInt(out_min))
                {
                    out_min=parseInt(out_min)+60;
                    diff_hrs--;
                }
                var diff_min=parseInt(out_min)-parseInt(in_min);

                var t_year=parseInt(date.split("-")[0]);
                var t_month=parseInt(date.split("-")[1]);
                var t_day=parseInt(date.split("-")[2]);

                //Is the input date format is incorrect this piece of code will notify
                if(date.split("-")[0].length!=4 || t_month>12 || t_month<=0 || t_day>31 || t_day<=0 || t_month==2)
                {
                    if(t_month==2)
                    {
                        if(((t_year % 4 == 0) && (t_year % 100 != 0)) || (t_year % 400 == 0))
                        {
                            if(t_day>=29)
                            {
                                console.log("Input date format is incorrect");
                                r_l.close()
                                return
                            }
                        }
                        else if(t_day>=28)
                        {
                            console.log("Input date format is incorrect");
                            r_l.close()
                            return;
                        }
                    }
                    else
                    {
                        console.log("Input date format is incorrect");
                        r_l.close();
                        return;
                    }   
                }

                const day = new Date(months[t_month-1]+" "+ t_day +" ,"+t_year);
                diff_hrs=(diff_hrs<10)? "0"+diff_hrs:diff_hrs;
                diff_min=(diff_min<10)? "0"+diff_min : diff_min
                obj.employeName=employeName;
                obj.date=date;
                obj.checkinTime=checkinTime;
                obj.checkouttime=checkouttime;
                obj.dept=dept;
                obj.workinghours= diff_hrs +" : "+diff_min;
                obj.day=days[day.getDay()-1];
                console.log(obj);

                r_l.close()
            });
        });
    }
});