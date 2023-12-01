# include<iostream>
# include<string>
using namespace std;

class Vehicle{

    public:
    void inputSpeed(float s){
        speed=s;
    }
    void inputFuel(float f){
        fuel=f;
    }

    protected:
    float speed;
    float fuel;
};

class Car: public Vehicle{

    private:
    string brand;
    public:
    void setbrand(string b){
        brand=b;
    }
    
string getbrand(){
    return brand;
}
    
     float getSpeed(){
     return speed;
}
float getFuel(){
     return fuel;
}
};

int main()
{

    Car myCar;

    float a;
    cout<< "Enter the speed of car: ";
    cin >> a;
    myCar.inputSpeed(a);
    
    float b;
    cout<< "Enter the fuel capacity of car: ";
    cin >> b;
    myCar.inputFuel(b);

    string c;
    cout<< "Enter the brand of car: ";
    cin >> c;
    myCar.setbrand(c);
    
    cout<< "Detail of car is:  "<< endl;
    cout<< "Speed of car is:  "<< myCar.getSpeed() << endl;
    cout<< "Fuel capacity of car is:  " << myCar.getFuel()<< endl;
    cout<< "Detail of car is:  " << myCar.getbrand()<< endl;


    
    return 0;
}



