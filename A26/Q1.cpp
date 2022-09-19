#include<iostream>
using namespace std;

class Complex{
private:
    int a,b;
public:
    void setData(int x, int y){
        a=x;
        b=y;
    }

    void showData(){
        cout<<endl;
        cout<<a<<" + "<<b<<"i";
    } 

    Complex add(Complex C){
        C.a = a + C.a;
        C.b = b + C.b;
        return C;  
    }

};

int main(){
    Complex C1,C2,C3;
    int a,b;
    cout<<"Enter the complex number ";
    cin>>a>>b;
    C2.setData(2,3);
    C1.setData(a,b);
    C1.showData();
    
    C3 = C1.add(C2);
    C3.showData();
    return 0;
}