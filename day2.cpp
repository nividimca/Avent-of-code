#include<iostream>

using namespace std;

int main(){
    int myA[100][4];
    int* a= *myA;
    int value, temp=0;    
    while(cin>>value){
        *a=value;
        ++a;
        ++temp;
    }
    cout<<endl<<"START"<<endl;
    for(int i=0; i<temp/4; ++i){
        for(int j=0; j<4; ++j){
            cout<<myA[i][j];
        }
    }
}
