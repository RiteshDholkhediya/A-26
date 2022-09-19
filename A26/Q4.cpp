#include<iostream>
using namespace std;

class Counter{

private: 
    static int count;

public:
    Counter(){
        count++;
        cout<<"Counter = "<<count<<endl;
        
    }
};


int Counter::count;
int main(){
    Counter c1,c2,c3;
    return 0;
}