#include<iostream>
using namespace std;
class dynamicarray{
int *data;
int index;
int capacity;
public:
//constructor
dynamicarray(){
this->data=new int[10];
this->capacity=10;
this->index=0;

}
void add(int element){
if(index==capacity){
int *newdata=new int [2*capacity];
for(int i=0;i<capacity;i++){
    newdata[i]=data[i];
    
}
delete [] data;
data=newdata;
capacity*=2;
}
data[index]=element;
index++;

}
int getnumber(int index){
  if(index<=this->index){
    return data[index];  
  }else{
      return -1;
  }

}
//TO ADD PARTICULAR NUMBER EI  PARTICULAR INDEX
void addnumber(int index,int element){
if(index<this->index){
    data[index]=element;
}else if (index==this->index)
{
    add(element);
}else{
    return ;
}

}

void print (){
    for(int i=0;i<this->index;i++){
        cout<<data[i]<<" ";
        
    }
    cout<<endl;
}

};
int main(){
    
    dynamicarray d1;
    d1.add(1);
    d1.add(2);
    d1.add(3);
    d1.add(34);
    d1.add(44);
    d1.add(35);
    d1.add(13);
    d1.add(134);
    d1.add(135);
    d1.add(124);
    d1.add(124);
    d1.add(124);
    d1.add(1232);
    d1.add(100);
    d1.print();
    d1.addnumber(7,0);
    d1.print();
}