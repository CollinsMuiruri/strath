#include <iostream>
using namespace std;

class Student{
    int age = 30;
    int registrationNumber = 2002;
    public: 
        int returnAge(){
            return age;
        }
        int returnRegNo(){
            return registrationNumber;
        }
};

int main(){
    Student Soita;
    cout<<"Age: "<<Soita.returnAge()<<endl;
    cout<<"RegNo: "<<Soita.returnRegNo()<<endl;
}