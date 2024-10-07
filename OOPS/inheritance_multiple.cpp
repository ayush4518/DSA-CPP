#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "Animal speaking" << endl;
    }
};

class Human {
    public:
    string color;

    public:
    void speak() {
        cout << "Human speaking" << endl;
    }
};

// Multiple inheritance
class Hybrid : public Animal, public Human {
    public:
    void useAnimalSpeak() {
        Animal::speak();
    }
    void useHumanSpeak() {
        Human::speak();
    }
};

int main() {
    Hybrid obj1;
    obj1.useAnimalSpeak();  // Calling Animal's speak()
    obj1.useHumanSpeak();   // Calling Human's speak()

    return 0;
}