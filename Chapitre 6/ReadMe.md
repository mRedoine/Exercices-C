1. Devise a program that counts the number of characters in its input up to the end of file.

2. Write a program that reads input as a stream of characters until encountering EOF . Have
the program print each input character and its ASCII decimal value. Note that characters
preceding the space character in the ASCII sequence are nonprinting characters.
Treat them specially. If the nonprinting character is a newline or tab, print \n or \t ,
respectively. Otherwise, use control-character notation. For instance, ASCII 1 is Ctrl+A,
which can be displayed as ^A . Note that the ASCII value for A is the value for Ctrl+A
plus 64. A similar relation holds for the other nonprinting characters. Print 10 pairs per
line, except start a fresh line each time a newline character is encountered. (Note: The
operating system may have special interpretations for some control characters and keep
them from reaching the program.)

3. Write a program that reads input as a stream of characters until encountering EOF .
Have it report the number of uppercase letters, the number of lowercase letters, and the
number of other characters in the input. You may assume that the numeric values for the
lowercase letters are sequential and assume the same for uppercase. Or, more portably,
you can use appropriate classification functions from the ctype.h library.

4. Write a program that reads input as a stream of characters until encountering EOF . Have
it report the average number of letters per word. Don’t count whitespace as being letters
in a word. Actually, punctuation shouldn’t be counted either, but don’t worry about that
now. (If you do want to worry about it, consider using the ispunct() function from the
ctype.h family.)

5. Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing
strategy. For example, have the program initially guess 50, and have it ask the user
whether the guess is high, low, or correct. If, say, the guess is low, have the next guess
be halfway between 50 and 100, that is, 75. If that guess is high, let the next guess be
halfway between 75 and 50, and so on. Using this binary search strategy, the program
quickly zeros in on the correct answer, at least if the user does not cheat.

6. Modify the get_first() function of Listing 8.8 so that it returns the first nonwhitespace
character encountered. Test it in a simple program.

7. Modify Programming Exercise 8 from Chapter 7 so that the menu choices are labeled by
characters instead of by numbers; use q instead of 5 as the cue to terminate input.
8. Write a program that shows you a menu offering you the choice of addition, subtraction,
multiplication, or division. After getting your choice, the program asks for two numbers,
then performs the requested operation. The program should accept only the offered
menu choices. It should use type float for the numbers and allow the user to try again
if he or she fails to enter a number. In the case of division, the program should prompt
the user to enter a new value if 0 is entered as the value for the second number. A typical
program run should look like this:<br>
Enter the operation of your choice:<br>
a. add s. subtract<br>
m. multiply d. divide<br>
q. quit<br>
a<br>
Enter first number: 22 .4<br>
Enter second number: one<br>
one is not an number.<br>
Please enter a number, such as 2.5, -1.78E8, or 3: 1<br>
22.4 + 1 = 23.4<br>
Enter the operation of your choice:<br>
a. add s. subtract<br>
m. multiply d. divide<br>
q. quit<br>
d<br>
Enter first number: 18.4<br>
Enter second number: 0<br>
Enter a number other than 0: 0.2<br>
18.4 / 0.2 = 92<br>
Enter the operation of your choice:<br>
a. add s. subtract<br>
m. multiply d. divide<br>
q. quit<br>
q<br>
Bye.<br>
