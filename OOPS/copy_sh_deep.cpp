#include<iostream>
#include<limits.h>
#include<math.h>
#include<cstring>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char *Name;
    char level;

    // static keyword:
    static int timetocomplete ;

    // Default constructor
    Hero(){
        cout<<"Default constructor called"<<endl;
        Name = new char[100];  // Allocate memory for the name
    }

    // Parameterized constructor
    Hero(int health, char level){
        this->level = level;
        this->health = health;
        Name = new char[100];  // Allocate memory for the name
    }

    // Copy constructor (deep copy)
    Hero(Hero& temp){  // Pass by reference
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;

        // Allocate new memory and copy the name (deep copy)
        this->Name = new char[strlen(temp.Name) + 1];  // +1 for null terminator
        strcpy(this->Name, temp.Name);
    }

    // Destructor to avoid memory leaks
    ~Hero(){
        delete[] Name;  // Free dynamically allocated memory
    }

    // Function to print the object's data
    void print(){
        cout << endl;
        cout << "[ Name: " << this->Name << " ,";
        cout << "Health: " << this->health << ",";
        cout << "Level: " << this->level << " ]";
        cout << endl;
    }

    // Getter for health
    int getHealth(){
        return health;
    }

    // Getter for level
    char getlevel(){
        return level;
    }

    // Setter for health
    void sethealth(int h){
        health = h;
    }

    // Setter for level
    void setlevel(char ch){
        level = ch;
    }

    // Setter for name
    void setName(char name[]){
        strcpy(this->Name, name);
    }

    static int random(){
        return timetocomplete;
    }

    // ~Hero(){
    //     cout<<"destruction bhai called "<<endl;
    // }
};
// static keyword:
int Hero::timetocomplete=5;

int main(){
    Hero hero1;  // Default constructor called
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "Ayush";
    hero1.setName(name);

    hero1.print();

    // Use copy constructor (deep copy)
    Hero hero2(hero1);
    hero2.print();

    // Modify hero1's name
    hero1.Name[5] = 'I';  // Changing hero1's name
    hero1.print();  // hero1's name will be changed

    // hero2's name should remain unchanged due to deep copy
    hero2.print();


// // statically
//     Hero a1;


// // manually destruction
//     Hero *b=new Hero();
//     delete b;


// static keyword:
cout<<Hero::timetocomplete<<endl;

cout<<Hero::random()<<endl;

    Hero a;
    cout<<a.timetocomplete<<endl;

    


    // correct way
    Hero b;
    b.timetocomplete=10;
    cout<<a.timetocomplete<<endl;
    cout<<b.timetocomplete<<endl;


    return 0;
}
