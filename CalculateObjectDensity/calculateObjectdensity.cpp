#include <iostream>
using namespace std;

int main()
{
float mass, volume, density;

cout<<"calculate the densiy of an object."<<endl;

cout<<"Mass (kg): ";
cin>> mass;

cout<<"Volume (cubic meters): ";
cin>>volume;

density = mass / volume;

cout<<"The density of on object that has a mass of "<<mass<<" kg and a volume of "<<volume<<" m3 has a density of "<<density<<".\n";

}

