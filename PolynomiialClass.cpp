class Polynomial {
    public:
    int *degCoeff;      
    int capacity;
    Polynomial(){
        this->degCoeff=new int [10]{0};
        this->capacity=10;

    }
   Polynomial(Polynomial const&d){
       delete []this->degCoeff;
       this->capacity=d.capacity;
       this->degCoeff=new int [d.capacity]{0};
       for(int i=0;i<capacity;i++){
           this->degCoeff[i]=d.degCoeff[i];
           
       }

   }
   void operator=(Polynomial const &d){
       delete []this->degCoeff;
        this->capacity=d.capacity;
        this->degCoeff=new int [d.capacity]{0};
        for(int i=0;i<capacity;i++){
        this->degCoeff[i]=d.degCoeff[i];
           
       }
   }
  void print(){
     for(int i=0;i<capacity;i++){
         if(degCoeff[i]!=0){
             cout<<degCoeff[i]<<"x"<<i<<" ";

         }
         
     }
     cout<<endl;

  }
  Polynomial operator+(Polynomial const&d){
    Polynomial ds;

      ds.capacity=max(capacity,d.capacity);
      int *newdegcoff= new int[ds.capacity]{0};
    for(int i=0;i<ds.capacity;i++){
        newdegcoff[i]=this->degCoeff[i]+d.degCoeff[i];
    }
    delete []degCoeff;
        ds.degCoeff=newdegcoff;
        return ds;
  }
Polynomial operator-(Polynomial const&d){
    Polynomial ds;

      ds.capacity=max(capacity,d.capacity);
      int *newdegcoff= new int[ds.capacity]{0};
    for(int i=0;i<ds.capacity;i++){
        newdegcoff[i]=this->degCoeff[i]-d.degCoeff[i];
    }
    delete []degCoeff;
        ds.degCoeff=newdegcoff;
        return ds;

}
 void setCoefficient(int degree,int coefficient){
     while(degree>capacity){
if(degree>capacity){
int *newdegcoff= new int [2*capacity]{0};
for(int i=0;i<capacity;i++){
    newdegcoff[i]=this->degCoeff[i];
    
}
delete []degCoeff;
degCoeff=newdegcoff;
capacity*=2;
}
        }
        this->degCoeff[degree]=coefficient;
 }
  
Polynomial operator*(Polynomial const &d){
int *data =new int [(this->capacity)*d.capacity]{0};
for(int i=0;i<capacity;i++){
    if(degCoeff[i]==0){
        continue;
    }
    for(int j=0;j<d.capacity;j++){
        if(d.degCoeff[i]==0){
        continue;
    }
        data[i+j]=data[i+j]+degCoeff[i]+d.degCoeff[j];
    }
}
      Polynomial d2;
      delete[]d2.degCoeff;
      d2.degCoeff=data;
      d2.capacity=(this->capacity)*d.capacity;
      return d2;
  }
    
};
/*#include <vector>
#include <climits>
#include <iostream>
using namespace std;


//Driver program to test above functions
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    switch(choice){
            // Add
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
            // Subtract
        case 2 :
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
            // Multiply
        case 3 :
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}*/