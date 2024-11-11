#include "Student.h"

Student::Student(const string& name, int age, const string& fieldOfStudy, const string& birthDate, const string& group)
    : name(name), age(age), fieldOfStudy(fieldOfStudy), birthDate(birthDate), group(group) {
    cout << ">>> Ctor Student: " << name << endl;
}

Student::~Student() {
    cout << ">>> Dtor Student: " << name << endl;
}

void Student::setName(const string& name) {
    this->name = name;
}

void Student::setAge(int age) {
    this->age = age;
}

void Student::setFieldOfStudy(const string& fieldOfStudy) {
    this->fieldOfStudy = fieldOfStudy;
}

void Student::setBirthDate(const string& birthDate) {
    this->birthDate = birthDate;
}

void Student::setGroup(const string& group) {
    this->group = group;
}

const string& Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

const string& Student::getFieldOfStudy() const {
    return fieldOfStudy;
}

const string& Student::getBirthDate() const {
    return birthDate;
}

const string& Student::getGroup() const {
    return group;
}

void Student::print() const {
    cout << "Student Name       :: " << name << endl;
    cout << "Student Age        :: " << age << endl;
    cout << "Field of Study     :: " << fieldOfStudy << endl;
    cout << "Birth Date         :: " << birthDate << endl;
    cout << "Group              :: " << group << endl;
}
