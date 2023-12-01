#include <iostream>
using namespace std;

class Shape{

    private:
    double length;
    double weidth;
    public:
    
    void setlength(double l){
        length=l;
    }
    
    void setweidth(double w){
        weidth=w;
    }

    double calculatearea(){
        area = length*weidth;
        return area;
    }
    protected: 
    double area;
};


class Rectangle: public Shape{

public:
double getArea(){
     calculatearea();
     return area;
}};

int main()
{

    Rectangle myRectangle;
    
    double a;
    cout<< "Enter the length of rectangle: ";
    cin >> a;
    myRectangle.setlength(a);
    
    double b;
    cout<< "Enter the weidth of rectangle: ";
    cin >> b;
    myRectangle.setweidth(b);
    
    
    cout<< "Area is: "<< myRectangle.getArea();

    
    return 0;
}

