#include<iostream>
using namespace std;

class StaticCount{

private:
    static int k;

public :

    void count(){
        k++;
    }
    int getCount(){
        return k;
    }

};

int StaticCount::k=0;

int main(){
    StaticCount s1;
    s1.count();
    s1.count();
    s1.count();

    cout<<s1.getCount()<<" times";
    
    return 0;
}