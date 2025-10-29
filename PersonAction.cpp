#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person() : name("") {}
    Person(string _name) : name(_name) {}
    virtual ~Person() {}
    virtual void eat() = 0;
    virtual void sleep() = 0;
};

class Student : public Person {
public:
    Student() : Person() {}
    Student(string _name) : Person(_name) {}
    
    virtual void eat() {
        cout << "学生 " << name << " 在食堂吃饭" << endl;
    }
    
    virtual void sleep() {
        cout << "学生 " << name << " 在宿舍休息" << endl;
    }
};

class Teacher : public Person {
public:
    Teacher() : Person() {}
    Teacher(string _name) : Person(_name) {}
    
    virtual void eat() {
        cout << "教师 " << name << " 在教师食堂吃饭" << endl;
    }
    
    virtual void sleep() {
        cout << "教师 " << name << " 在学校公寓休息" << endl;
    }
};

class Parents : public Person {
public:
    Parents() : Person() {}
    Parents(string _name) : Person(_name) {}
    
    virtual void eat() {
        cout << "学生家长 " << name << " 在招待所吃饭" << endl;
    }
    
    virtual void sleep() {
        cout << "学生家长 " << name << " 在招待所休息" << endl;
    }
};

class Foreign : public Person {
public:
    Foreign() : Person() {}
    Foreign(string _name) : Person(_name) {}
    
    virtual void eat() {
        cout << "外宾 " << name << " 在外宾接待室吃饭" << endl;
    }
    
    virtual void sleep() {
        cout << "外宾 " << name << " 在外宾宾馆休息" << endl;
    }
};

class Leader : public Person {
public:
    Leader() : Person() {}
    Leader(string _name) : Person(_name) {}
    
    virtual void eat() {
        cout << "上级领导 " << name << " 在贵宾餐厅吃饭" << endl;
    }
    
    virtual void sleep() {
        cout << "上级领导 " << name << " 在贵宾楼休息" << endl;
    }
};

void receiveGuests(Person *p[], int n) {
    for (int i = 0; i < n; i++) {
        p[i]->eat();
        p[i]->sleep();
        cout << "-----------------------------" << endl;
    }
}

int main() {
    Person *pp[7];
    pp[0] = new Student("刘亚涛");
    pp[1] = new Student("陈宏科");
    pp[2] = new Teacher("王新华");
    pp[3] = new Teacher("杨娟");
    pp[4] = new Parents("涂建华");
    pp[5] = new Foreign("John");
    pp[6] = new Leader("李校长");

    receiveGuests(pp, 7);

    for (int i = 0; i < 7; i++) {
        delete pp[i];
    }

    return 0;
}
