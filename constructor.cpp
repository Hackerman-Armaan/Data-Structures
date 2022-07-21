#include<iostream>
using namespace std;
class armaan{
int weight;
int height;
 public:
armaan(){

}
armaan(int r,int a){
    cout<<this<<endl;
    weight=r;
    height=a;
}
void print(){
cout<<weight<<endl;
cout<<height<<endl;

}
};
int main(){

    armaan s1(65,257);
    s1.print();
    armaan s2(s1);
    s2.print();
    armaan s3=s1;
    s3.print();
    
    
}