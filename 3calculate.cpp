#include <iostream>
/* "О®с­Ў«ој©" лЎ«лґ«уЇ®® 
ПЎсЎў®у«ћ т©ііб·ЁжЎ¤ж¬Ґо©ї оћ 0. СҐиґ«уЎ° гј·йІ«ж®ЁзЎ®тіЎҐуІЅ лЎЄ у¦«іжЈ и® оЃљнѕЁг¬ 
Ж±м¦ г­Ґті¬ п°ҐсЎ·ЁжЎўг¦±у¦Ў±й­ўп© c, у¬ЎЄб¬јлґ«уЇ® тў± тјЈ жі± аЎ­бё м¬¬ 
рђ±Ё гЈ®еЈ т©­ўп¬  e г­Ґті¬ п°ҐсЎ·ЁжЎЄб¬јлґ«уЇ® иЎўж±ёб¦І сЎў®у±ћЁexit).*/
using namespace std;
int main()
{	char operation = 0;
	int num1=0, num2=0, result = 0, i = 0;
  
	while (1 > 0) {
		if (i == 0) {
	  cout << "Enter 1st number: ";
	  cin >> num1;
	  cout << "Choose operation: (+), (-), (/), (*), (e), (c): ";
	  cin >> operation;
	    if (operation != 'e')
	  {
		  cout << "Enter 2nd number: ";
		  cin >> num2;

	  calculator:
		  switch (operation)
		  {
		  case '+':
			  result = num1 + num2;
			  cout << num1 << " + " << num2 << " = " << result << endl;
			  num1 = result;
			  i = 1;
			  break;
		  case '-':
			  result = num1 - num2;
			  cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			  num1 = result;
			  i = 1;
			  break;
		  case '/':
			  if (num2 == 0)
				  cout << "Hands up you're under arrest. Division by zero is illegal." << endl;
			  else
				  result = num1 / num2;
			  cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			  num1 = result;
			  i = 1;
			  break;
		  case '*':
			  result = num1*num2;
			  cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
			  num1 = result;
			  i = 1;
			  break;
		  case 'e':
			  cout << "Thanks for using! ";
			  system("pause");
			  return 0;
		  case 'c': i = 0;
			  cout << "Cleaned" << endl;
			  break;
		  default:
			  cout << "Error" << endl; }
		}}
		else {
			cout << "Chose operation: (+), (-), (/), (*), (e), (c):  ";
			cin >> operation;
			if (operation != 'e' && operation != 'c') {
				cout << "Enter 2nd number ";
				cin >> num2;
			}
			goto calculator;
		}
	}
 
   system("pause");
   return 0;
}