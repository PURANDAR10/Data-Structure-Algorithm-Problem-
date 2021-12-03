#include<iostream>
using namespace std;
class student{
    public:
    int rollnum;
    int age;
    int static totalstudent;
    student(int age,int rollnum){
        totalstudent++;
        this->rollnum=rollnum;
        this->age=age;
        cout<<rollnum<<endl<<age<<endl;
        cout<<"sare student:"<<student::totalstudent<<endl;

    }
    
};
 int student::totalstudent;
int main(){
    
    student s1(1,21);
    
    student s2(2,22);
    student s3(3,23);
    student s4(4,24);
    student s5(5,26);
   // cout<<s1.age<<"  "<<endl<<s1.rollnum<<endl;
    // cout<<"sare student:"<<totalstudent<<endl;


}