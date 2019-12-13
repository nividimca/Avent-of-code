#include <iostream>

using namespace std;

int main(){
    int myA[1000000];
    int mass=0, temp=0;
    while(cin>>mass){
       myA[temp]=mass;
        ++temp;
    }
    int fuel;
    // Part1:
    for(int i=0; i<temp; ++i){
        fuel += ( (myA[i]/3) - 2 );        
    }    
    cout<<"Fuel for all mass Part 1= "<<fuel<<endl;
    // Part2:
    int newMass=0;
    fuel=0;
    for(int i=0; i<temp; ++i){
        newMass= myA[i];
        while(newMass/3 -2 >0){
            int moduleFuel = (newMass/3 -2);
            newMass = moduleFuel;
            fuel += moduleFuel;
        }    
    } 
    cout<<"Fuel for all mass Part 2= "<<fuel<<endl;
}

