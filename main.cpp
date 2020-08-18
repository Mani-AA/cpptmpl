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

int main()
{
    Car carObj1{"BMW", "X5", 1999};
    Car carObj2("Ford", "Mustang", 1969);

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;
}
