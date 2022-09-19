#include<iostream>
using namespace std;

class Box{

private: 
    int l,b,h,v;

public :
    Box(){
        l=0;
        b=0;
        h=0;
    }

    Box(int length, int breadth, int height){
        l=length;
        b = breadth;
        h = height; 
    }

    void setDimentions(int length, int breadth, int height){
        l=length;
        b=breadth;
        h=height;

    }

    void volume(){
        v = l*b*h;
    }

    int getVolume(){
        return v;
    }


};

int main(){
    int l,b,h;
    Box b1, b2(1,2,4),b3;

    cout<<"Enter the length, breadth, and height ";
    cin>>l>>b>>h;
    b3.setDimentions(l,b,h);
    b1.volume();
    b2.volume();
    b3.volume();
    cout<<"\nVolume of b1 "<<b1.getVolume();
    cout<<"\nVolume of b2 "<<b2.getVolume();
    cout<<"\nVolume of b3 "<<b3.getVolume();

    

}