#include<iostream>
#include<cstring>
using namespace std;
class student{
int roll;
string name;
public :
student(int roll, string s1){
this->roll=roll;
this-> name=s1;
}
void display(){
    cout<<roll<<endl;
    cout<<name<<endl;
}

};

int main(){
    int roll1,roll2;
    string s1;
    string s2;
    cin>>roll1;
   cin>>s1;

    cin>>roll2;
    cin>>s2;
    student armaan(roll1,s1);
    armaan.display();
    
    student vishal(roll2,s2);
    vishal.display();
    s2[0]='y';
    s1[0]='j';
    armaan.display();
    vishal.display();

}
