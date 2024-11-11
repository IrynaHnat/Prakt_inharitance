#pragma once
#include"library.h"

class Student {
public:
    Student(const string& name = "Unknown", int age = 0, const string& fieldOfStudy = "Undeclared",
        const string& birthDate = "Unknown", const string& group = "Unknown");
    ~Student();

    void setName(const string& name);
    void setAge(int age);
    void setFieldOfStudy(const string& fieldOfStudy);
    void setBirthDate(const string& birthDate);
    void setGroup(const string& group);

    const string& getName() const;
    int getAge() const;
    const string& getFieldOfStudy() const;
    const string& getBirthDate() const;
    const string& getGroup() const;

    virtual void print() const;

protected:
    string name;
    int age;
    string fieldOfStudy;
    string birthDate;
    string group;
};