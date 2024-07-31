// Map is a key:value pair, all the keys in map are unique and a single key can only point to a single value, different keys can have same value but not vice versa

//It is printed in an sorted order for map and not sorted for unordered map

#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int,string> m;

    m[1]="Ash"; //Here is 1 is key and Ash is value
    m[12]="Halua"; //Here is 12 is key and Halua is value
    m[2]="Meh"; //Here is 2 is key and Meh is value

    m.insert( {6,"Laddu"} ); // Here we are using the insert function to add the value Laddu having the key 6 in the map and using curly braces {} to make pair

    //We can make pair without using the curly brackets but by using the make_pair funtion


    cout<<"Before erase : "<<endl;
    for(auto i:m){
        cout<<i.first<<" : " <<i.second<<endl;
    }

    m.erase(2); //Here we are erasing the key 2 from the map
    cout<<"After Erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" : " <<i.second<<endl;
    }



    return 0;
}