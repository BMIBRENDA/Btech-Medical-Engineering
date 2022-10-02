//C++ Program to decide bonus given to employees according to years of service
#include <iostream>
using namespace std;
int main()
{
int salary;
int netBonusAmount;
int numberofyearsofservice;
cout<<"Enter the salary:"<<endl;
cin>>salary;
cout<<"Enter the number of years of service"<<endl;
cin >>numberofyearsofservice;
if(numberofyearsofservice>=6 && numberofyearsofservice <=10)
{
        netBonusAmount=0.08*salary;
}
else if(numberofyearsofservice>10)
{
        netBonusAmount=0.1*salary;
}
else
    {
    netBonusAmount=0.05*salary;
}
if(netBonusAmount>0 && salary>0)
    {
        cout<<"The net bonus amount: "<<netBonusAmount<<"endl"<<endl;
    }
    else
        {
      cout <<"Wrong data\n\n";
    }
    return  0;
}
