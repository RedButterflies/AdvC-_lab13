//
// Created by szyns on 10.01.2024.
//
#include "algorithm"
#include "functions.h"
#include <vector>
#include <cmath>

bool isEven(int n){
    if(n%2==0)
        return true;
    else
    return false;
     }
int sign(int n){
    if(n<0)
         return -1;
    if(n>0)
         return 1;
     else
     return 0;
     }
 vector<int> difference(vector<int> vec){
     vector<int>res;
     for(int i=1; i<vec.size();i++){
         res.push_back(vec[i]-vec[i-1]);
         }
     return res;
     }
 void show(string line){
     if(line.empty())
         throw runtime_error("Pusty napis");
     cout<<"Podany napis to: "<<line<<endl;
     }
bool isPrim(int n)
{
    if(n==1){return false;}
    vector<int>liczby;
    int licznik = 0;
    for(int i=1;i<n+1;i++)
    {
        liczby.push_back(i);
    }
    for_each(liczby.begin(),liczby.end(),[&licznik,&n](int elem){if(n%elem==0) licznik ++;});
    if(licznik > 2)
    {
        return false;
    }
    else

        return true;

}
float division(int a, int b)
{
    if(b==0)
    {
        throw runtime_error("Blad dzielenia przez 0");
    }
    else
    {
        float value = float(a)/float(b);
        return value;
    }

}
float root(int a, int b)
{
    if(b<0)
    {
        throw runtime_error("Pierwiastek ujemnego stopnia nie istnieje");
    }
    else if(a<0)
    {
        throw runtime_error("Pierwiastek z liczby ujemnej nie istnieje");
    }
    else
    {
        float result = floor(pow(float(a),(1/float(b))));
        return result;

    }

}
double oppositeNumber(double number)
{
    if(number == 0)
    {
        throw runtime_error("Nie istnieje liczba przeciwna do 0");
    }
    else
    {
        double oppositeNumber = number * (-1.0);
        return oppositeNumber;
    }
}