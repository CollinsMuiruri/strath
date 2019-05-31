#include <iostream>
using namespace std;

double computeArea(double b, double h){
    return 0.5*b*h;
}

int main(){
    double height,base;
    cout<<"Enter the base"<<endl;
    cin>>base;
    cout<<"Enter the height"<<endl;
    cin>>height;

    cout<<"The area of the triangle is ["<<computeArea(base,height)<<"]"<<endl;

    return 0;
}
