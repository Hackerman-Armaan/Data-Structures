#include<iostream>
using namespace std;
class fraction{
        int num;
        int deno;
    public:
        fraction(int a,int b){
    num=a;
    deno=b;

        }
void add(fraction const &f2){
int lcm=deno*f2.deno;
int x=lcm/num;
int y=lcm/f2.num;
num=(x*num)+(y*f2.num);
deno=lcm;
simplify();
}
    void simplify(){
        int gcd=1;
    int j=min(num,deno);
    for(int i=1;i<j;i++){
        if(num%i==0&&deno%i==0){
            gcd=i;
        }
        
    }
    num=num/gcd;
    deno =deno/gcd;
 }
 void print(){
     cout<<num<<"/"<<deno<<endl;
 }

    };
int main(){
    fraction f1(13,4);
    fraction s1(14,24);
    f1.add(s1);
    f1.print();

    
}   