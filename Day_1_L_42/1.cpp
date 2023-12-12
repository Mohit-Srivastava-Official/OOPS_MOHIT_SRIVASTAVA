#include<iostream>
// #include "Hero.cpp"
using namespace std;
class Hero
{
    //properties
    private:
    int health;
    public:
    char level;
    //Default Constructor
    Hero()
    {
        cout<<"Constructor called"<<endl;
    }
    //Parameterised Constrcutor
    Hero(int health)

    {
        cout<<"this ->"<<this<<endl;
        this-> health=health;
    }
    Hero(int health,char level)
    {
        this->level=level;
        this->health=health;

    }
    void print()
    {
        cout<<"level "<<level<<endl;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health=h;
    }
    void setLevel(char ch)
    {
        level=ch;
    }

};
int main()
{
    //object created statistically
    Hero ramesh(10);
    cout<<"Address of ramesh " <<&ramesh<<endl;
    ramesh.print();
    //dynamically
    Hero *h=new Hero();
    h->print() ;
    Hero temp(22,'B');
    temp.print();
    //creation of object
    //ramesh is object of class hero
    // cout<<"size : "<<sizeof(h1)<<endl;
    // Static Allocation
    // Hero a;
    // a.setHealth(80);
    // a.setLevel('B');
    // cout<<"level is "<<a.level<<endl;
    // cout<<"health is "<<a.getHealth()<<endl;
    // // dynamic allocation
    // Hero *b= new Hero;
    // b->setHealth(100);
    // b->setLevel('A');

    // Hero ramesh;
    // cout<<"Health is : "<<(*b).getHealth()<<endl;
    // cout<<"Level is  : "<<(*b).level<<endl;
    // cout<<"Health is : "<<b->getHealth()<<endl;
    // cout<<"Level is  : "<<b->level<<endl;
    // // cout<<"Size of ramesh is  "<<sizeof(ramesh)<<endl;
    // // cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
    // // ramesh.health=70;
    // ramesh.setHealth(70);
    // ramesh.level='a';
    // cout<<" "<<h1;
    return 0;
};