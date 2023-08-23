#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
 float pecahan, vround, vceil, vfloor, vtrunc,
 
 //minta masukan bilangan pecahan 
 cout<< "Masukan bilangan  pecahan : ";
 
 //melakukan pembulatan
 vround = round(pecahan) ;
 vceil = ceil(pecahan);
 vfloor = floor(pecahan);
 vtrunc = trunc(pecahan);
 
//menampilkan hasil pembulatan
cout << "Hasil Pembulatan Round: " << vround <<endl;
cout << "Hasil Pembulatan ceil: " <<
