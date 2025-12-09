                           //*Constructors With Default Arguments In C++*//
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
    Simple(int a, int b=9, int c=16){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple :: printData(){
    cout<<"The value of data 1 is "<< data1 <<" and data 2 is "<<data2<<" and data 3 is "<< data3<<endl;
}
int main(){
    Simple s(141, 142);
    s.printData();
    return 0;
}