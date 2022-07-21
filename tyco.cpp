#include<iostream>
using namespace std;
class student{
int roll;
static int totalNumber;
int const age;
public:
student(int r):age(r){

totalNumber++;

}
 
static int total(){
return totalNumber;

}
const void display(){
cout<<this->age;

}

};
int student::totalNumber=0;
int main(){
   student s1(2);

cout<<student::total()<<endl;
    s1.display();
    
}