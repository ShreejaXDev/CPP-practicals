
/*A university managing academic data for its students. The administration seeks to digitize the records
of student performance, including personal and academic details. The system must store each
student's roll number, name, and marks in three subjects. Additionally, it should provide
functionalities to calculate and display the average marks for performance analysis.
The institution's IT team proposed a solution where student records could be initialized in two ways:
either with default values for testing purposes or by accepting specific input details for each student.
Once initialized, the system would allow for viewing comprehensive student details, including their
roll number, name, marks, and calculated average. This functionality was designed to help faculty and
administrators track individual student performance efficiently.
To simulate real-world usage, the team decided to create multiple student records. They planned to
populate the system with a mix of students initialized using both default and specific values. The
system's ability to accurately calculate averages and display detailed student information was to be
tested with this data.*/

//program withcompile time intialization


#include<iostream>
using namespace std;
 class student
 {
     int rollnumber;
     string name;
     int marks[3];
public:
     //default
     student()
     {
     rollnumber=0;
     name="default name";
     marks[0]=marks[1]=marks[2]=0;
     }


     //parameterazid
     student(int r,string n,int m1,int m2,int m3)
     {
         rollnumber=r;
         name=n;
         marks[0]=m1;
         marks[1]=m2;
         marks[2]=m3;


     }

     //function to calculate average


     double cal_avg()
     {
         return (marks[0]+marks[1]+marks[2])/3.0;
     }


     //function to display details


     void display()

     {
         cout<<"ROLL NUMBER :" <<rollnumber<<endl;
         cout<<"NAME : "<<name<<endl;
         cout<<"AVERAGE MARKS : "<<cal_avg()<<endl;

     }
 };


 int main()
 {
     student s[3]={student(),student(1,"shreeja",10,20,30),student(10,"shree",100,20,30)};



     for(int i=0; i<3;i++)
     {

        s[i].display();
     }

     return 0;
 }
