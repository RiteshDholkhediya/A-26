#include<iostream>
using namespace std;

class Date{

private:
    int d,m,y;

public: 

    Date(){
        d=14;
        m=9;
        y=2022;
    }

    Date(int date, int month, int year){
        d=date;
        m=month;
        y=year;
    }

    void setDate(int date, int month, int year){
        d = date;
        m = month;
        y = year;

    }

    void showDate(){
        cout<<d<<"/"<<m<<"/"<<y;
        cout<<endl;
    }

};

int main(){
    Date d1,d2(1,2,1999);

    d1.showDate();
    d2.showDate();
    return 0;
}