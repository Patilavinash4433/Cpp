#include<iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    Employee In[4];
    for (int i = 0; i < 4; i++)
    {
        In[i].getId();
        In[i].setId();
    }

    return 0;
}