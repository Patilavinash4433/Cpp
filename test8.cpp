#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell Me Your age"<<endl;
    cin>>age;

    if(age<18){
        cout<<"you can not come my party"<<endl;
    }
    else if(age==18){
        cout<<"your Aligebel to party"<<endl;
    } 
    else{
        cout<<"you can come to party"<<endl;
    }
    

    return 0;
}