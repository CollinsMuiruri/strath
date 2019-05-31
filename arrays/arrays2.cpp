#include <iostream>
using namespace std;

void printArray(){
    double myArray [] = {40,60,70,80};
    for(int i=0;i<3;i++){
        cout<<myArray[i]<<endl;
    }
}

int main(){
   printArray();

   return 0;
}