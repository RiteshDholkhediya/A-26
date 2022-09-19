#include<iostream>
using namespace std;
class Time{

private:
    int hr,min,sec;

public:
    Time(){
        hr = 0;
        min = 0;
        sec = 0;
    }
    
    Time(int h, int m, int s){
        hr = h;
        min = m;
        sec = s;
    }

    

    void normalize(){
        min = min + sec/60;
        sec = sec%60;
        hr = hr + min/60;
        min = min%60;
    }

    Time add(Time t){
        Time temp;
        temp.hr = hr + t.hr;
        temp.min = min + t.min;
        temp.sec = sec + t.sec;
        temp.normalize();
        return temp;   
    }

    void showTime(){
        cout<<hr<<" : "<<min<<" : "<<sec;
    }

};

int main(){

    Time t1(4,43,90),t2(3,40,65),t3;
    t3 = t1.add(t2);
    t3.showTime();

    return 0;
}

