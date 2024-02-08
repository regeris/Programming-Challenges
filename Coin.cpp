#include <cstdlib>
#include <ctime>
#include "Coin.h"
#include <iostream>
using namespace std;

Coin::Coin(){


toss();

cout << getSideUp();

}

void Coin::toss(){
    int value;

const int MIN_VALUE = 1;

value = (rand() % 2 ) + MIN_VALUE;

if(value == 1){
sideUp = "heads";
}
else
{
    sideUp = "tails";
}


}

string Coin::getSideUp(){

return sideUp;
}
