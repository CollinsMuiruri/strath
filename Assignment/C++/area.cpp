#include <iostream>
#include <math.h>
using namespace std;

float area,s;
float pentaArea(float s){
    area = (5*(s*s))/(4*(tan(3.142/5)));
}

int main(){
    cout<<"Input length of sides\n";cin>>s;
    pentaArea(s);
    cout<<"The area of your pentagon is : "
    <<area<<endl<<endl<<endl<<endl<<endl<<
    "       Copyright 2019 -- By Conto"<<endl;
}