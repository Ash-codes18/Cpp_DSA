#include <iostream>
#include "hero.cpp"
using namespace std;


// class Hero{

//     //Properties of class Hero
//     char name[10];
//     int health;
//     char level;


// }; //Defined class Hero

int main(){

    // creation of object
    Hero Raju;

    cout<<"Size of object h1 : "<<sizeof(Raju)<<endl;
    //Should be 15 but rounded of to 20 for reserving some space for padding 

    // An empty class has 1 byte of memory


    //Accessing a property/data member of an object


    // Raju.health = 100;
    Raju.level = 'S';


    //we can access it by using . operator

    // cout<<"Health of Raju : "<<Raju.health;
    //Cannot be accessed since health has a private access modifier needs to be made public


     cout<<"Level of Raju : "<<Raju.level;
    //Can be accessed since it is set to private

    return 0;
}