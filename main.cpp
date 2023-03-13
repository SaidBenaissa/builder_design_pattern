#include <iostream>
#include <string>

class Car { // Product
public:
    std::string make;
    std::string model;
    int year;
    std::string color;
    int numberOfDoors;
};

class CarBuilder { // Builder
public:
    CarBuilder& setMake(const std::string& make) {
        car.make = make;
        return *this;
    }

    CarBuilder& setModel(const std::string& model) {
        car.model = model;
        return *this;
    }

    CarBuilder& setYear(int year) {
        car.year = year;
        return *this;
    }

    CarBuilder& setColor(const std::string& color) {
        car.color = color;
        return *this;
    }

    CarBuilder& setNumberOfDoors(int numberOfDoors) {
        car.numberOfDoors = numberOfDoors;
        return *this;
    }

    Car build() { // Return the final product
        return car;
    }

private:
    Car car; // The product
};

int main() {
    CarBuilder builder;
    Car car = builder.setMake("Toyota")
                      .setModel("Corolla")
                      .setYear(2020)
                      .setColor("Blue")
                      .setNumberOfDoors(4)
                      .build();

    Car c = builder.setMake("T").setYear(2020).setColor("B").setNumberOfDoors(4).build();
    std::cout << car.make << " " << car.model << " " << car.year << " " << car.color << " " << car.numberOfDoors << std::endl;
    std::cout << c.make << " " << c.model << " " << c.year << " " << c.color << " " << c.numberOfDoors << std::endl;

    return 0;
}
