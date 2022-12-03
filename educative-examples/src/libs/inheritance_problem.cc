#include <iostream>

using namespace std;

class Animal
{
    private:
        string Name;
        string Sound;
    public:
        Animal():Animal("", ""){}
        Animal(string name, string sound) : Name(name), Sound(sound)
        {
        }
        void Animal_Details()
        {
            cout << Name << ", " << Sound;
        }
};

class Dog : public Animal
{
    private:
        string family;
    public:
        Dog(string name, string sound) : Animal(name, sound)
        {

        }
        void setFamily(string fam){family = fam;}
        void Dog_detail()
        {
            cout << family <<", ";
            Animal_Details();
        }
};

class Sheep : public Animal
{
    private:
        string color;
    public:
        Sheep(string name, string sound) : Animal(name, sound)
        {

        }
        void setColor(string col){color = col;}
        void Sheep_detail()
        {
            cout << color << ", ";
            Animal_Details();
        }
};

int main()
{
    Dog d("Pongo", "Woof Woof");
    d.Dog_detail();
    Sheep s("Billy", "Baaa Baaa");
    s.Sheep_detail();
    return 0;
}