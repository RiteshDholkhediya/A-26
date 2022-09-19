#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Student{

private: 
    int rollno;
    char name[30];
    char address[100];
    char course[30];

public :

    Student(){
        rollno = 0;
        strcpy(name,"");
        strcpy(address,"");
        strcpy(course,"");
    }

    Student(int roll, char n[], char add[], char c[]){
        rollno = roll  ;
        strcpy(name,n);
        strcpy(address,add);
        strcpy(course,c);

    }

    void setData(int r, char n[], char adr[], char c[]){
        rollno = r;
        strcpy(name,n);
        strcpy(address,adr);
        strcpy(course,c);

    }

    void display(){
        cout<<"\nRoll number : "<<rollno;
        cout<<"\nname  : "<<name;
        cout<<"\naddress : "<<address;
        cout<<"\ncourse : "<<course;
    }

};
int main(){
    Student s1(1,"Ritesh","XYZ","MCA");
    s1.display();

    getch();
    return 0;
}