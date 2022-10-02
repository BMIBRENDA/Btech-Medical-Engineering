//C++ to print the largest of three numbers
#include <iostream>
using namespace std;
int main()
{
    int numb1,numb2,numb3;
    cout<<"Enter three numbers"<<endl;
    cin>>numb1>>numb2>>numb3;
    if ((numb1>numb2) && (numb1>numb3))

        cout<<"numb1 is the largest"<<endl;
        else if((numb2>numb1) && (numb2>numb3))

    cout<<"numb2 is the largest"<<endl;
    else
        cout<<"numb3 is the largest"<<endl;

    return 0;
    }
