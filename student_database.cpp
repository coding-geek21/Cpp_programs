// 2) Create a database to store the students personal and academic details.
// Add a function to automatically compute their CGPA 

#include <iostream>

using namespace std;

class student
{
public:
    char name[20];
    int rollno,math,phy,chem,bio,eng,cs;
    float cgpa;
    student()
    {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter the roll no.: ";
        cin>>rollno;
        cout<<"Enter the marks obtained in Math: ";
        cin>>math;
        cout<<"Enter the marks obtained in Physics: ";
        cin>>phy;
        cout<<"Enter the marks obtained in Chemistry: ";
        cin>>chem;
        cout<<"Enter the marks obtained in Biology: ";
        cin>>bio;
        cout<<"Enter the marks obtained in Computers: ";
        cin>>cs;
        cout<<"Enter the marks obtained in English: ";
        cin>>eng;
        cgpa=(math+phy+chem+bio+eng+cs)/60;
    }
};

int main()
{
    int n;
    float res;
    cout<<"Enter the number of students : ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"CGPA of student "<<i+1<<" is : "<<s[i].cgpa;
    }
    return 0;
}
