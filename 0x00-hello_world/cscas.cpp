//Eruvieru Oghenekaro Benjamin
//190822013

#include <iostream>
#include <iomanip>

using namespace std;

    class Student
    {
    public:

    //Variables
    string name;
    int matric;
    int GPA = 0;
    int TNU = 0;

    //Methods
    void addCourse(int score, int unit)
        {
        TNU += unit;
        GPA += score * unit;
        }

    double getGP()
        {
        return GPA / (double)TNU;
        }
    };

   //Print Result Function

   int i = 0;
   void printResults(Student student)
   {
    i++;
    cout << fixed << setprecision (2);
    cout << "Student "<< i << "\n";
    cout << "Name: " << student.name << "\n";
    cout << "Matric Number: " << student.matric << "\n";
    cout << "GP: " << student.getGP() << "\n\n";
    }

    // Main Function

    int main()
    {

    Student student1;
    student1.name = "Eruvieru Oghenekaro";
    student1.matric = 190822013;
    student1.addCourse(3, 3);
    student1.addCourse(3, 2);
    student1.addCourse(4, 3);
    student1.addCourse(5, 1);
    student1.addCourse(3, 2);

    Student student2;
    student2.name = "Badmus Thomson";
    student2.matric = 190822039;
    student2.addCourse(2, 3);
    student2.addCourse(4, 2);
    student2.addCourse(4, 3);
    student2.addCourse(3, 1);
    student2.addCourse(1, 2);

    Student student3;
    student3.name = "Erebholo David";
    student3.matric = 190822023;
    student3.addCourse(2, 3);
    student3.addCourse(3, 2);
    student3.addCourse(0, 3);
    student3.addCourse(1, 1);
    student3.addCourse(3, 2);

    Student student4;
    student4.name = "Chiamaka Thomson";
    student4.matric = 190822029;
    student4.addCourse(2, 3);
    student4.addCourse(4, 2);
    student4.addCourse(4, 3);
    student4.addCourse(5, 1);
    student4.addCourse(5, 2);

    Student student5;
    student5.name = "Onuha Victor";
    student5.matric = 190822003;
    student5.addCourse(5, 3);
    student5.addCourse(3, 2);
    student5.addCourse(4, 3);
    student5.addCourse(5, 1);
    student5.addCourse(5, 2);

    Student student6;
    student6.name = "Amah Emmanuel";
    student6.matric = 190822009;
    student6.addCourse(2, 3);
    student6.addCourse(1, 2);
    student6.addCourse(3, 3);
    student6.addCourse(0, 1);
    student6.addCourse(1, 2);

    Student student7;
    student7.name = "Precious Racheal";
    student7.matric = 190822011;
    student7.addCourse(0, 3);
    student7.addCourse(3, 2);
    student7.addCourse(0, 3);
    student7.addCourse(5, 1);
    student7.addCourse(5, 2);

    Student student8;
    student8.name = "Ewulu Jonana";
    student8.matric = 190822001;
    student8.addCourse(1, 3);
    student8.addCourse(1, 2);
    student8.addCourse(2, 3);
    student8.addCourse(0, 1);
    student8.addCourse(2, 2);

    Student student9;
    student9.name = "Bello Bolu";
    student9.matric = 190822017;
    student9.addCourse(5, 3);
    student9.addCourse(3, 2);
    student9.addCourse(0, 3);
    student9.addCourse(5, 1);
    student9.addCourse(5, 2);

    Student student10;
    student10.name = "Micheal Fred";
    student10.matric = 190822021;
    student10.addCourse(5, 3);
    student10.addCourse(5, 2);
    student10.addCourse(4, 3);
    student10.addCourse(4, 1);
    student10.addCourse(4, 2);

    printResults(student1);
    printResults(student2);
    printResults(student3);
    printResults(student4);
    printResults(student5);
    printResults(student6);
    printResults(student7);
    printResults(student8);
    printResults(student9);
    printResults(student10);

    return 0;
}

