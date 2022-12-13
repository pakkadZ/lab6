#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double deg1){
double degree=(deg1*M_PI)/180;
return degree;
}

double rad2deg(double rad1){
double raddian=(rad1*180)/M_PI;
return raddian;
}

double findXComponent(double lex1,double lex2,double rax1,double rax2){
double xcompo =(lex1*cos(rax1))+(lex2*cos(rax2));
return xcompo;

}
double findYComponent(double ley1,double ley2,double ray1,double ray2){
double ycompo =(ley1*sin(ray1))+(ley2*sin(ray2));
return ycompo;

}
double pythagoras(double CX,double CY){
double py =(sqrt(pow(CY,2)+pow(CX,2)));
return py;
}
void showResult(double num1,double num2){
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout<<"Length of the resultant vector = "<<num1<<"\n";
cout<<"Direction of the resultant vector (deg) = "<<num2<<"\n";
cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";

}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
