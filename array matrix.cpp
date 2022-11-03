//program array for [2,3,3] matrix
#include<iostream>
using namespace std;
int main()
{
int a;
int i,j,k;
  //This array can store upto 18 elements
int array[2][3][3]= {
                                 {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}
                            }, 
                            {
                                {10, 11, 12}, 
                                {13, 14, 15}, 
                                {16, 17, 18}
                            }
                        };

//use of nested for loop
//Access vector for the array
  for(i=0;i<2;i++)
  ;
  //Access rows for the array
{
for(j=0;j<3;j++)
  ;
  //Access columns for the array
{
for(k=0;k<3;k++)
  ;
{
cout<<"a[i][j][k]"<<"";
}
}
}
return 0;
}