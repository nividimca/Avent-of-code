#include<iostream>

using namespace std;

int main(){
    int myA[1000000];
    int mass=0, temp=0;
    while(cin>>mass){
       myA[temp]=mass;
        ++temp;
    }
    int fuel;
    for(int i=0; i<temp; ++i){
        fuel = fuel + ( (myA[i]/3) - 2 );        
    }    
    cout<<"Fuel for all mass = "<<fuel<<endl;
}
