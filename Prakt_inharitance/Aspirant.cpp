#include "Aspirant.h"

Aspirant::Aspirant(const string& name, int age, const string& fieldOfStudy,
    const string& birthDate, const string& group,
    const string& researchTopic)
    : Student(name, age, fieldOfStudy, birthDate, group), researchTopic(researchTopic) {
    cout << ">>> Ctor Aspirant: " << name << endl;
}

Aspirant::~Aspirant() {
    cout << ">>> Dtor Aspirant: " << name << endl;
}

void Aspirant::setResearchTopic(const string& researchTopic) {
    this->researchTopic = researchTopic;
}

const string& Aspirant::getResearchTopic() const {
    return researchTopic;
}

void Aspirant::print() const {
    Student::print();
    cout << "Research Topic     :: " << researchTopic << endl;
}
