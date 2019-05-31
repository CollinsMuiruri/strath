#include <iostream>
using namespace std;

class Rectangle{

    double width = 1,height = 1;
    double area, perimeter;
    Rectangle();
    Rectangle(double width, double height);
    public:
        int getArea(){
            cout<<"Input your width";cin>>width;
            cout<<"Input your height";cin>>height;
            area = width*height;            
            return area;
        }
        int getPerimeter(){
            perimeter = (width*2)+(height*2);
            return perimeter;
        }
};

int main(){
    Rectangle one;
    cout<<Rectangle.getArea();
    
}