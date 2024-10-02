/*

Lab16: Color Class w/Constructors
COMSC-210
Naveen Islam
IDE: emacs
  
 */

#include <iostream>
#include <string>
using namespace std;

// create Class color
class Color {
    // private member variables
 private:
 int red;
 int green;
 int blue;
	
 public:
 // default constructor, initializing the colors to 0
 Color() {
   red = 0;
   green = 0;
   blue = 0;
 }

 // parameterized constructor, initializing the colors to the parameters values
 Color(int r, int g, int b) {
   red = r;
   green = g;
   blue = b;
 }

 // partial constructor that initializes only red with the parameterized value. green and blue are initialized to default values of 0
 Color(int r) {
   red = r;
   green = 0;
   blue = 0;
 }
  
 // setter functions for red, green, and blue
 void setRed(int redVal) {
   red = redVal;
 }

 void setGreen(int greenVal) {
   green = greenVal;
 }

 void setBlue (int blueVal) {
   blue = blueVal;
 }

 // getter functions for red, green, and blue
 int getRed() const {
   return red;
 }

 int getGreen() const {
   return green;
 }

 int getBlue() const {
   return blue;
 }

 // print function that displays the values of each color
 void print() const {
   cout << "red value: " << red << endl;
   cout << "green value: " << green << endl;
   cout << "blue value: " << blue << endl;
   cout << endl;
 } 
};

// main function
int main() {

  // Color class objects
  Color defaultValues; // call default constructor
  Color onlyRedVal(40); // call the partial constructor to only assign values to red, with green and blue being initialized to 0
  Color firstColor(123, 113, 111); // parameterized constructor
  Color secondColor(101, 10, 101); // parameterized constructor
  Color thirdColor(1, 2, 3); // parameterized constructor

  // print function to output created Color objects
  defaultValues.print();
  onlyRedVal.print();
  firstColor.print();
  secondColor.print();
  thirdColor.print();
  
  return 0;
}
