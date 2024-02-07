#include <iostream>
#include "Population.h"
using namespace std;

int main(){

double pop, b, d;

do{
cout << " Enter population size: " << endl;
cin >> pop;
if(pop < 1){
    cout << "Population cannot be less than 1. Try again. " << endl;
}
}while(pop < 1);


do{
cout << "Enter number of births: " << endl;
cin >> b;
if(b < 0){
    cout << "Number of births cannot be less than 0. Try again. " << endl;
}
}while(b < 0);


do{
cout << "Enter number of deaths: " << endl;
cin >> d;
if(d < 0){
    cout << "Deaths cannot be less than 0. Try again." << endl;
}
}while(d < 0);



Population info(pop, b, d);

cout << "Birth Rate: " << info.getBirthRate() << endl;
cout << "Death Rate: " << info.getDeathRate() << endl;
