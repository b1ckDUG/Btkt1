#include <iostream>
using namespace std;

string status(float weight, float height) {
    float bmi = weight/(height*height);
    if (weight<0 || height<0) return "khong hop le";
    if (bmi<18.5) return "nhe can";
    if (bmi>=18.5 && bmi<23) return "binh thuong";
    if (bmi>=23 && bmi<25) return "tien beo phi";
    if (bmi>=25 && bmi<30) return "beo phi 1";
    return "beo phi 2";
}

int main() {
    float weight, height;
    cin >> weight >> height;
    cout << status(weight, height);
}