#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> A {1,12,2,3,1,1,2,3,1,3,4,3,1,5,0,3,2,1,6,19,1,9,19,23,2,23,10,27,1,27,5,31,1,
                31,6,35,1,6,35,39,2,39,13,43,1,9,43,47,2,9,47,51,1,51,6,55,2,55,10,59,1,59,
                5,63,2,10,63,67,2,9,67,71,1,71,5,75,2,10,75,79,1,79,6,83,2,10,83,87,1,5,87,
                91,2,9,91,95,1,95,5,99,1,99,2,103,1,103,13,0,99,2,14,0,0};
    bool end = false;
    bool wrong = false;
    vector<int> temp=A;
    //part1
    cout<<"Start star 1"<<endl;
    
    for(int i=0; i<A.size() && !end && !wrong; i=i+4){
        if(temp[i] == 1){
            temp[temp[i+3]] = temp[temp[i+2]] + temp[temp[i+1]];;      
        }
        else if(temp[i] == 2){
            temp[temp[i+3]]=temp[temp[i+1]]*temp[temp[i+2]];     
        }
        else if(temp[i] == 99){
            end=true;
        }
        else{
            cout<<"something is wrong"<<endl;
            wrong=true;    
        }
    }
    cout<<"Puzzle answer first star: "<<temp[0]<<endl;
    //part2
    cout<<"Start star 2"<<endl;
    temp=A;
    for(int x=0; x<100 && temp[0]!=19690720; ++x){
        for(int y=0; y<100 && temp[0]!=19690720; ++y){
            end=false;
            temp=A;
            temp[1]=x;
            temp[2]=y;
            for(int i=0; i<A.size() && !end; i=i+4){
                if(temp[i] == 1){
                    temp[temp[i+3]] = temp[temp[i+2]] + temp[temp[i+1]];;      
                }
                else if(temp[i] == 2){
                    temp[temp[i+3]]=temp[temp[i+1]]*temp[temp[i+2]];     
                }
                else if(temp[i] == 99){
                    end=false;
                }
            }
        }
    }
    cout<<"Puzzle answer second star: Noun="<<temp[1]<<" verb="<<temp[2]<<endl;
}
