#include<iostream>
using namespace std;

class rectangle{
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

    double area(){
        return length*weidth;
    }
    double perimeter(){
        return 2*(length+weidth);
    }

void showData(){
    cout<< "length of the rectangle: " << length <<endl;
    cout<< "weidth of the rectangle: " << weidth<<endl;
    cout<< "area of the rectangle: " << area()<< endl;
    cout<< "perimeter of the rectangle: " << perimeter()<< endl;

}

};

int main()
{

    rectangle myRectangle;
    double a;
    cout<< "Enter the length of rectangle: ";
    cin >> a;
myRectangle.setlength(a);
double b;
    cout<< "Enter the weidth of rectangle: ";
    cin >> b;
myRectangle.setweidth(b);
myRectangle.showData();

    
    return 0;


}