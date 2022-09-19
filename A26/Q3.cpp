#include<iostream>
using namespace std;

class Cube{

private:
    int v,vol;

public:  
    Cube(){
        v=0;
    }

    Cube(int n){
        v=n;
    }

    void setVolume(int n){
        v=n;
    }

    void volume(){
        vol = v*v*v;
    }

    int getVolume(){
        return vol;
    }

};


int main(){
    Cube v1;
    int l;

    cout<<"Enter the length of one edge of cube ";
    cin>>l;

    v1.setVolume(l);
    v1.volume();
    cout<<"\nVolume of the cube is "<<v1.getVolume();
    return 0;
}