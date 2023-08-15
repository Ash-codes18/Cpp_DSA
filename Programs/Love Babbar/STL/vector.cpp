//The size of a vector doubles every time it is filled and has to increase its size to take more inputs

#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    //Capacity tells the amount of size alloted for the number of elements 
    // Size tells the number of elements

    cout<<"Capacity of the vector : "<<v.capacity()<<endl;

    v.push_back(1); //To input elements to the vector;
    cout<<"Capacity of the vector : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of the vector : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of the vector : "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity of the vector : "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity of the vector : "<<v.capacity()<<endl;

    cout<<"Capacity of the size : "<<v.size()<<endl;


    //We can access the elements of a vector in the same way we acces the elements of an array
    cout<<"Elements of the vector : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at index 1 : "<<v.at(1)<<endl;
    cout<<"Element at index 2 : "<<v[2]<<endl;

    cout<<"First Element : "<<v.front()<<endl;
    cout<<"Last Element : "<<v.back()<<endl;

    //To remove the last element of the vector
    v.pop_back();

    cout<<"After using pop, the last element : "<<v.back()<<endl;

    cout<<"Size before clearing :  "<<v.size()<<endl;

    //to remove all the elements of the vector
    v.clear();
    cout<<"Size after clearing :  "<<v.size()<<endl;
    //The capacity (Memory) of the vector remains same even after clearing

    //To initialize a vector with a predefined size 
    vector<int> vec(4);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    cout<<"Size : "<<vec.size()<<endl;
    cout<<"First element : "<<vec.front()<<endl;
    //By default all the values in a vector is initialized to 0

    //To initialize a vector with a predefined size and value
    vector<int> vec1(4,7); 
    cout<<"First element : "<<vec1.front()<<endl;

    //To copy a vector into another vector 
    vector<int> copy(vec1);

    cout<<endl;cout<<"Elements of the copied vector : ";
    for(int i=0;i<copy.size();i++){
        cout<<copy[i]<<" ";
    }
    cout<<endl;

   //To enter an element in the middle of the vector 
  // vector_name.insert (position, val);

    cout << "Element at index 2 before insertion : " << vec[2] << endl;
    vec.insert(vec.begin() + 2, 14);
    cout << "Element at index 2 after insertion : " << vec[2] << endl;



    return 0;
}