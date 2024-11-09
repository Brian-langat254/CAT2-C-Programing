#include <stdio.h>

int main() {

float hoursworked, hourlywages, grosspay, tax, netpay;

printf ("Enter hours worked in a week: ");

scanf("%f", &hoursworked);

printf("Enter hourly wages: ");

scanf("%f", &hourlywages);

/*calculate gross pay*/

if (hoursworked > 40) {

float overtime = hoursworked - 40;

grosspay = (40 * hourlywages) + (overtimehours * hourlywages * 1.5);

} else {

grosspay = hoursworked * hourlywages;

}

/*calculate taxes*/

if (grosspay <=600) {

tax = grosspay * 0.15;

} else {

tax = (600 * 0.15) + ((grosspay - 600) * 0.20);

}

/*calculate the net pay*/

netpay = grosspay - tax;

/*outputs*/

printf("Gross pay: $%.2f\n", grosspay);

printf("Taxes: $%.2f\n", tax);

printf("Net pay: $%.2f\n", netpay);

return 0;

}



