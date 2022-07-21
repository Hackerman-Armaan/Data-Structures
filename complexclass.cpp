#include <iostream>
using namespace std;
class ComplexNumbers {
   int real,imaginary;
   public :
   ComplexNumbers(int a,int b){
       real=a;
       imaginary=b;
   }
void plus(ComplexNumbers const &f1){
    real=real+f1.real;
    imaginary=imaginary+f1.imaginary;

}
void multiply(ComplexNumbers const &f1){
int r1=(real*f1.real)-(imaginary*f1.imaginary);
int r2=(imaginary*f1.real)+(real*f1.imaginary);
real=r1;
imaginary=r2;


}
  void print(){
cout<<real<<" "<<"+"<<" "<<imaginary<<"i"<<endl;


  }  
};
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}
