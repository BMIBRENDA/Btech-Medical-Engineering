//program to convert degrees farenheit to degree celcious
#include<iostream>
using namespace std;
int main()
{
    float cel,far;
    cout<<"Enter temperature in fahrenheit:";
    cin>>cel;
    cel=5/9*(far-32);
    cout<<"Temperature in celcious is:"<<cel<<endl;
    return 0;
}