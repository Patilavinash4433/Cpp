                               //*Construction in C++*//                             
#include<iostream>
using namespace std;
class complex
{
    int a, b;
    public:
    complex(void);
    void printNumber()
    {
        cout<<"Your Name is "<< a <<" + "<< b <<"i"<< endl;
    }
};
    complex :: complex(void)
    {
            a = 10;
            b = 25;
    }
int main(){

    complex c;
    c.printNumber();
    c.printNumber();

    return 0;
}