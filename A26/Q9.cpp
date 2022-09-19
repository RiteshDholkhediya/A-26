#include<iostream>
#include<conio.h>
#include<string.h>


using namespace std;

class Bill{

private: 
    char name[30];
    char address[50];
    int ca_no;
    int units;

public :
    Bill(){
        strcpy(name,"");
        strcpy(address,"");
        ca_no=0;
        units = 0;

    }

    Bill(char n[], char a[], int c, int u){
        strcpy(name, n);
        strcpy(address, a);
        ca_no  = c;
        units = u;
    }

    void setValues(char n[], char a[], int c, int u){
        strcpy(name,n);
        strcpy(address,a);
        ca_no = c;
        units = u;

    }

    float calculateBill(){
        if(units < 100)
            return units*1.20;
        else if(units <= 200)
            return units*2;
        else 
            return units*3;
    }



};

int main(){
    Bill b1,b2("Ritesh","XYZ",123,100);
    char name[30], address[50];
    int ca_no,units;
    cout<<"Enter Details of your bill"<<endl;
    // cin.ignore();
    cout<<"Your Name : ";
    cin.getline(name,30);
    // cin.ignore();
    cout<<"Your Address : ";
    cin.getline(address,50);

    cout<<"\nEnter your bill units ";
    cin>>units;
    cout<<"\nEnter your CA number ";
    cin>>ca_no;

    b1.setValues(name,address,ca_no,units);
    cout<<"bill of the object 1 : "<<b1.calculateBill();
    cout<<"\nBill of the object 2 : "<<b2.calculateBill();


    return 0;
}