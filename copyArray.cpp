#include <iostream>
using namespace std;

template <typename T>
void Copy(T a[], T b[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

struct Student {
    int num;
    double score;
};

ostream& operator<<(ostream& os, const Student& s) {
    os << "{" << s.num << ", " << s.score << "}";
    return os;
}

int main() {
    int Aint[6], Bint[6] = {1, 3, 5, 7, 9, 11};
    Copy(Aint, Bint, 6);
    
    cout << "复制后的整数数组 Aint: ";
    for (int i = 0; i < 6; i++) {
        cout << Aint[i] << " ";
    }
    cout << endl;
    
    Student Astudent[3];
    Student Bstudent[3] = {{100, 88}, {110, 76}, {130, 92}};
    Copy(Astudent, Bstudent, 3);
    
    cout << "复制后的学生数组 Astudent: ";
    for (int i = 0; i < 3; i++) {
        cout << Astudent[i] << " ";
    }
    cout << endl;
    
    return 0;
}
