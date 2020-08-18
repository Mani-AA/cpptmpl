#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
    Car(string, string, int);
};

Car::Car(string brand, string model, int year)
{
    this->brand = brand;
    this->model = model;
    (*this).year = year;
}

ostream &operator<<(ostream &sout, const Car &car)
{
    sout << car.brand << " " << car.model << " " << car.year << "\n";
    return sout;
}

int main()
{
    Car carObj1{"BMW", "X5", 1999};
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1;
    cout << carObj2;

    return 0;
}
