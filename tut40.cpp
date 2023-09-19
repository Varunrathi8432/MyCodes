#include <iostream>
using namespace std;

// ************************** MULTILEVEL INHERITANCE *********************************
class student // base class oF exam
{
protected:
    int roll_number;
    int id;

public:
    void get_detail();
    void set_detail();
};

void student ::get_detail()
{
    roll_number = 46;
    id = 2;
}

void student ::set_detail()
{
    cout << "id oF student : " << id << endl
         << "roll number oF student : " << roll_number << endl;
}

class exam : public student // base class oF result
{
protected:
    float maths;
    float physics;
    float chemistry;

public:
    void get_marks();
    void set_marks();
};

void exam ::get_marks()
{
    maths = 91.0;
    physics = 92.0;
    chemistry = 88.0;
}

void exam ::set_marks()
{
    cout << "marks in maths , physics , chemistry : " << endl
         << maths << endl
         << physics << endl
         << chemistry << endl;
}

class result : public exam // derieved class oF student and exam
{
    float percentage;

public:
    void display()
    {
        percentage = (maths + physics + chemistry) / 3;
        set_detail();
        set_marks();
        cout << "results oF student : " << percentage;
    }
};

int main()
{
    result varun;
    varun.get_detail();
    varun.get_marks();
    varun.display();
    return 0;
}
