#include "Student.h"
#include "Aspirant.h"

int main() {
    Student student("Iryna Hnativ", 29, "Computer Science", "1995-05-14", "CS-101");
    student.print();

    cout << "---------------------" << endl;

    Aspirant aspirant("Jane Smith", 25, "Biochemistry", "1998-11-22", "BC-201", "Enzyme Analysis");
    aspirant.print();

    
}
