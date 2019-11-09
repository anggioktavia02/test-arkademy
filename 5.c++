#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
main()
{
    int a[3] [3], b[3] [3], c[3] [3],i,j,k;

    cout<<" Matriks 3x 3 :";
    cout<<end1;;
    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {

    cout<<" Input Baris "<<(i+1<<", Kolom "<<(j+1)<<" = ";

    cin>>a[i] [j]; }
    cout<<end1; }

    cout<<" Matriks 3 x 3 = "<<end1<<end1;

    for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
    cout<<setw(4)<<a[i][j];}
    cout<<end1<<end1;}
    getch () ;
}