#include <iostream>
#include "Payroll.h"
using namespace std;

int main(){

float h, rate;

Payroll employees[7];

for(int i = 0; i < 7; i++){
    cout << "Enter hourly rate for employee " << i + 1 << endl;
    cin >> rate;
    employees[i].setPayrate(rate);

    do {
    cout << "Enter hours worked for employee " << i + 1 << endl;
    cin >> h;
    }while(h > 60);
    employees[i].setHoursWorked(h);

employees[i].setTotalWeekly();


}

for(int i = 0; i < 7; i++){
    cout <<  "Worker " << i + 1 << " Weekly Pay: " << employees[i].getTotalWeekly() << endl;

}


return 0;
}
