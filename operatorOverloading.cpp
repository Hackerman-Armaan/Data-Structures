#include<iostream>
using namespace std;
class number{
int integral;
int decimal;
public:
number(int integral,int decimal){
this->integral=integral;
this->decimal=decimal;

}
number operator+(const number&f2){
int a= integral+f2.integral;
int b= decimal+f2.decimal;
number newfun(a,b);
return newfun;

}
void display(){
cout<<integral<<"."<<decimal<<endl;

}

};
int main(){
 number  f1(1000,004);
    number f2(2898,7667);
    number f3=f1+f2;
    f3.display();
    
    
}