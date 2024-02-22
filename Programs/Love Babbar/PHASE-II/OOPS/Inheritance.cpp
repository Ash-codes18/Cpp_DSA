#include <iostream>
using namespace std;


class human{

private:
    int count;

public:
    int weight;
    int age;
    int height;

    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight=w;
    }

};


class male: public human{

public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getcount(){
        return this->count;
    }

};

class female : protected human{

public:

    string figure;

    void eat(){
        cout<<"Female Eating"<<endl;
    }

    void setheight(int h){
        this->height=h;
    }

    int getheight(){
        return this->height;
    }

};


class trans : private human{

    public:
        void setheight(int h){
            this->height=h;
        }

        int getheight(){
            return this->height;
        }

};


int main() {

    male ash;
    female ashi;
    trans meh;

    cout<<ash.age<<endl;
    cout<<ash.weight<<endl;
    cout<<ash.color<<endl;
    ash.sleep();
    ash.setWeight(65);
    // ash.getcount();
    cout<<ash.weight<<endl<<endl;

    
    ashi.eat();
    // cout<<ashi.height;
    cout<<ashi.getheight()<<endl;
    ashi.setheight(45);
    cout<<ashi.getheight()<<endl<<endl;

    
    // cout<<meh.height;
    cout<<meh.getheight()<<endl;
    meh.setheight(69);
    cout<<meh.getheight()<<endl;


    return 0;
}