#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;
public:
    Teacher(){
        dept = "Computer Science";
    }

    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    Teacher(){
        cout << "Hi, I am constructor\n";
    }
    // properties/attributes
    string name;
    string dept;
    string subject;
    // methods/member functions
    void changeDept(string NewDept)
    {
        dept = NewDept;
    }

    //setter
    void setSalary(double S){
        salary = S;
    }

    //getter
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1("Paarish","CSE","C++",50000);
}

// class student
// {
// public:
//     string name;
//     string grade;
//     string stream;
// };

// class account{
// private:
//     double balance;
// public:
//     string id;
//     string urn;
//     void setb(double b){
//         balance = b;
//     }
//     double getb(){
//         return balance;
//     }
// };

// int main()
// {
//     Teacher t1;
//     t1.name = "Paarish";
//     t1.subject = "C++";
//     // t1.dept = "Computer Science";
//     t1.setSalary(25000);
//     // student s1;
//     // s1.name = "Viraaj";
//     // s1.grade = "first year";
//     // s1.stream = "CSE";
//     // account a1;
//     // a1.id = "PD";
//     // a1.urn = "PDBOI";
//     // a1.setb(250000000);
//     cout << t1.name << endl;
//     cout << t1.dept << endl;
//     // cout << s1.name << endl;
//     cout << t1.getSalary() << endl;
//     // cout << a1.getb() << endl;

//     return 0;
// }