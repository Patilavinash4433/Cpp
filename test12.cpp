                         //Arrey//
#include<iostream>
using namespace std;

int main(){
    int marks[] ={25, 27, 56, 76};
    int mathsmarks[4];
    mathsmarks[0] = 345;
    mathsmarks[1] = 356;
    mathsmarks[2] = 632; 
    mathsmarks[3] = 432;
    cout<<"This is a roll no.0 marks"<<marks[0]<<endl;
    cout<<"This is a roll no.1 marks"<<marks[1]<<endl;
    cout<<"This is a roll no.3 marks"<<marks[2]<<endl;
    cout<<"This is a roll no.3 marks"<<marks[3]<<endl;
    cout<<"This is a roll no.4 marks"<<marks[4]<<endl;
    cout<<"These are maths marks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;

// for Loop program helps marks value fined out//
    for (int i = 0; i < 4; i++)
    {
       cout<<"This is a loop marks value="<<i<<"is"<<marks[i]<<endl;
    }
    

    return 0;
}