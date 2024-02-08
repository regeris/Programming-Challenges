#ifndef PAYROLL_H_INCLUDED
#define PAYROLL_H_INCLUDED


class Payroll{

private:
float payRate;
float hoursWorked;
float totalWeekly;


public:

    Payroll(){
payRate = 0;
hoursWorked = 0;
totalWeekly = 0;


    }

    void setHoursWorked(float h){

    hoursWorked = h;
    }

    void setPayrate(float p){
    payRate = p;
    }


    void setTotalWeekly(){

totalWeekly = hoursWorked * payRate;

}

float getTotalWeekly(){

return totalWeekly;

}


};
