#include <iostream>
using namespace std;

double n,pent;

int pentagonal(double n, double pent){
    pent = n*((3*n)-1)/2;

    return pent;
}

int main(){
    for (n = 1; n < 10; n++)
    {
        pent = n*((3*n)-1)/2;
        double myArray [] ={pent};
        cout<<myArray[];
    }
    return 0;
}