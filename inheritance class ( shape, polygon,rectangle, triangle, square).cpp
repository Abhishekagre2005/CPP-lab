#include <iostream>
 using namespace std;
 class Shape {
     public:
     void shape() {
         cout<<"This is a shape"<<endl;
     }
 };
 class Polygon:public Shape{
     public:
     void polygon(){
         cout<<"This shape is polygon "<<endl;
     }
 };
 
 class Rectangle: public Polygon{
     public:
     void ractangle(){
         cout<<"reactangle is a polygon"<<endl;
     }
 };
 class Trangle: public Rectangle {
     public:
     void trangle(){
         cout<<"trange shaped is polygon"<<endl;
     }
 };
 class Square : public Trangle {
     public:
     void squre(){
         cout<<"squre is a reactangle"<<endl;
     }
 };

int main()
{
    Square s1;
    s1.shape();
    s1.polygon();
    s1.ractangle();
    s1.trangle();
    s1.squre();
    

    return 0;
}