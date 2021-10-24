#include <stdio.h>

int main() 
{
int  menu,fare,funds,payment,change;


printf("What would you like to order?\n");
printf("[1]CHIPPY(Php20)\n[2]PIATTOS(Php40)\n[3]CRACKERS(Php90)\n");
printf("Your Selection:");
scanf("%d",&menu);


switch(menu){
case 1:
fare=20;

switch(menu){
case 1:

break;
}
printf("Enter Funds:");
 scanf("%d",&payment);
if(payment>=fare){
change= payment - fare;
printf("change: %d\n",change);
printf("You have purchased a CHIPPY,thank you!");
}
else{
printf("Not Enough Funds");
}
break;

case 2:
fare=40;


switch(menu){
case 1:

break;
}
printf("Enter Funds:");
 scanf("%d",&payment);
if(payment>=fare){
change= payment - fare;
printf("change: %d\n",change);
printf("You have purchased a PIATTOS,thank you!");
}
else{
printf("Not Enough Funds");
}
break;

case 3:
fare=90;

switch(menu){
case 1:

break;
}
printf("Enter Funds:");
 scanf("%d",&payment);
if(payment>=fare){
change= payment - fare;
printf("change: %d\n",change);
printf("You have purchased a CRACKERS,thank you!");
}
else{
printf("Not Enough Funds");
}
break;
}
return 0;
}