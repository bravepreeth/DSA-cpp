#include "cube.h"
#include <iostream>
double cube::volume() {
    return length*length*length; 
}

using std::cout;

int main() {
    cube c;
    c.length= 9.33;
    double vol = c.volume(); 
    cout<<vol;
    return 0; 
}