/*********
 * Octal to Decimal: 
 * Given a Octal number, convert it to decimal number.
 * ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    int num ;
    cout << "Enter the Octal number : ";
    cin >> num;
    int temp = num;
    int temp2 = num;
    int c = 0;
    int base =1;
    int decimal = 0;
    int rem;
    while(temp!=0){
        temp = temp/10;
        c = c+1;
    }   
    for(int i=1; i<=c; i++){
        rem = temp2%10; //Conversion to Decimal : Base 10
        decimal = decimal + rem*base;
        temp2 = temp2/10; //Conversion to Decimal : Base 10
        base = base*8; //As input digit is Octal
    }
    cout << "Decimal  Value of Octal Digit :" << num<< "is :" << decimal << "\n";
    
    return 0;
}


