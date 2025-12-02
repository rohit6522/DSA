#include<iostream>
using namespace std;

class Height{
    int feet;
    double inch;

    public:
    Height(){
        int feet = 0;
        double inch = 0.0;
    }
    void setHeight(int f) {
        feet = f;
        inch = 0.0;
    }

    void setHeightDouble(double fe){
        feet = (int)fe;
        inch = (fe - feet) * 12.0;
    }

    void setHeightInches(int f, double i){
        feet = f;
        inch = i;
    }
    void show(){
        cout << "Feet "<< feet << "Inches" << inch << endl;
    }


};


int main(){
    Height f1,f2,f3;

    int fet;
    double in;
    int ft1,in1;

    cin >> fet;
    cin >> in;
    cin >> ft1 >> in1;

    f1.setHeight(fet);
    f2.setHeightDouble(in);
    f3.setHeightInches(ft1,in1);


    f1.show();
    f2.show();
    f3.show();


    return 0;
}