#include<iostream>
using namespace std;
int main()
{
    int r , h;
    cout<<"Enter radius of Cylinder : ";
    cin>>r;
    cout<<"Enter height of Cylinder : ";
    cin>>h;
    float z = 3.14 * (r * r) * h;
    cout<<"The volume of Cylinder :"<<z;
}