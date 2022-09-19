#include<iostream>
using namespace std;


class Bank{
    
private : 
    int year;
    int principal;
    static float roi;
    float si;

public :
    Bank(){
        year=0;
        principal=0;
    }

    Bank(int p, int y){
        principal = p;
        year = y;
    }

    void setPrincipal(int p){
        principal = p;
    }

    void setYear(int y){
        year = y;
    }

    static void setRateOfInterest(float r){
        roi = r;
    }

    static float getRateOfInterest(){
        return roi;
    }

    int getPrincipal(){
        return principal;
    }

    int getYear(){
        return year;
    }

    void simpleInterest(){
        si = (principal*roi*year)/100;
    }
    
    float getSimpleInterest(){
        return si;
    }
};

float Bank::roi=3.5;

int main(){
    Bank b1,b2(50000,3);
    b2.simpleInterest();
    cout<<"\nSimple interest : "<<b1.getSimpleInterest();
    return 0;
}