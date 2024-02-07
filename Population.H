#ifndef POPULATION_H_INCLUDED
#define POPULATION_H_INCLUDED

class Population{

private:
double popSize;
double births;
double deaths;

public:
Population (double pop, double b, double d){

popSize = pop;
births = b;
deaths = d;

}

double getBirthRate(){
return births / popSize;
}

double getDeathRate(){
return deaths / popSize;
}

};



#endif // POPULATION_H_INCLUDED


