
1. Write a program that reads input until encountering the # character and then reports
the number of spaces read, the number of newline characters read, and the number of all
other characters read.

2. Write a program that reads input until encountering # . Have the program print each
input character and its ASCII decimal code. Print eight character-code pairs per line.
Suggestion: Use a character count and the modulus operator ( % ) to print a newline
character for every eight cycles of the loop.

3. Write a program that reads integers until 0 is entered. After input terminates, the
program should report the total number of even integers (excluding the 0) entered, the
average value of the even integers, the total number of odd integers entered, and the
average value of the odd integers.

4. Using if else statements, write a program that reads input up to # , replaces each period
with an exclamation mark, replaces each exclamation mark initially present with two
exclamation marks, and reports at the end the number of substitutions it has made.

5. Redo exercise 4 using a switch .

6. Write a program that reads input up to # and reports the number of times that the
sequence ei occurs.
Note
The program will have to “remember” the preceding character as well as the current character.
Test it with input such as “Receive your eieio award.”

7. Write a program that requests the hours worked in a week and then prints the gross pay,
the taxes, and the net pay. Assume the following:
a. Basic pay rate = $10.00/hr
b. Overtime (in excess of 40 hours) = time and a half
c. Tax rate: #15% of the first $300
20% of the next $150
25% of the rest
Use #define constants, and don’t worry if the example does not conform to current
tax law.

8. Modify assumption a. in exercise 7 so that the program presents a menu of pay rates
from which to choose. Use a switch to select the pay rate. The beginning of a run
should look something like this:
*****************************************************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr 2) $9.33/hr
3) $10.00/hr 4) $11.20/hr
5) quit
*****************************************************************
If choices 1 through 4 are selected, the program should request the hours worked. The
program should recycle until 5 is entered. If something other than choices 1 through 5
is entered, the program should remind the user what the proper choices are and then
recycle. Use #defined constants for the various earning rates and tax rates.

9. Write a program that accepts a positive integer as input and then displays all the prime
numbers smaller than or equal to that number.

10. The 1988 United States Federal Tax Schedule was the simplest in recent times. It had
four categories, and each category had two rates. Here is a summary (dollar amounts are
taxable income):
Category Tax
Single 15% of first $17,850 plus 28% of excess
Head of Household 15% of first $23,900 plus 28% of excess
Married, Joint 15% of first $29,750 plus 28% of excess
Married, Separate 15% of first $14,875 plus 28% of excess
For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850
+ 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category
and the taxable income and that then calculates the tax. Use a loop so that the user can
enter several tax cases.

11. The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per
pound, and carrots for $1.09 per pound. It gives a 5% discount for orders of $100 or
more prior to adding shipping costs. It charges $6.50 shipping and handling for any
order of 5 pounds or under, $14.00 shipping and handling for orders over 5 pounds
and under 20 pounds, and $14.00 plus $0.50 per pound for shipments of 20 pounds or
more. Write a program that uses a switch statement in a loop such that a response of a
lets the user enter the pounds of artichokes desired, b the pounds of beets, c the pounds
of carrots, and q allows the user to exit the ordering process. The program should keep
track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters
5 pounds of beets, the program should use report 9 pounds of beets. The program then should 
compute the total charges, the discount, if any, the shipping charges, and the
grand total. The program then should display all the purchase information: the cost per
pound, the pounds ordered, and the cost for that order for each vegetable, the total cost
of the order, the discount (if there is one), the shipping charge, and the grand total of all
the charges.
