#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
};

class Sport:virtual public Student
{
    public:
    int s_grade;
};

class Exam:virtual public Student
{
    public:
    int e_grade;
};

class Result:public Exam,public Sport
{
    public:
    string result;
    Result(string n,int rno,int s,int e)
    {
        name=n;
        roll=rno;
        s_grade=s;
        e_grade=e;
    }
    void display()
    {
        result="NAME:";
        result.append(name);
        result.append("\nRoll No.:");
        result.append(to_string(roll));
        result.append("\nSports Marks:");
        result.append(to_string(s_grade));
        result.append("\nExam Marks:");
        result.append(to_string(e_grade));
        cout<<result;
        //cout<<"Name:"<<name<<"\nRoll No.:"<<roll<<"\nSports Marks:"<<s_grade<<"\nExam Marks:"<<e_grade;
        
    }
};
int main()
{
    Result a("ABC",55,78,88);
    a.display();
}