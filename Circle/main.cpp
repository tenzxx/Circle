//
//  main.cpp
//  Circle
//
//  Created by tenzin choten on 20/12/23.
//

#include <iostream>
using namespace std;

struct circle {
    double area = 0,circumference = 0;
    void areas (int r){
        area = 3.14 *(r * r);
        cout<<area<<endl;
    }
    
    void circumferences(int r){
        circumference = 2 * 3.14 * r;
        cout<<circumference<<endl;
    }
};
int main() {
    double r;
    
    cout<<"Enter the radius \n";
    cin>>r;
    
    if(r > 0){
        
        circle obj;
        
        obj.circumferences(r);
        
        obj.areas(r);
    }
    else
        cout<<"Radies should be greater than 0\n";
    
    return 0;
}
