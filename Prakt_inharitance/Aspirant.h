#pragma once
#include"library.h"
#include "Student.h"

class Aspirant : public Student {
public:
    Aspirant(const string& name = "Unknown", int age = 0, const string& fieldOfStudy = "Undeclared",
        const string& birthDate = "Unknown", const string& group = "Unknown",
        const string& researchTopic = "No topic");
    ~Aspirant();

    void setResearchTopic(const string& researchTopic);
    const string& getResearchTopic() const;

    void print() const override;

private:
    string researchTopic;
};