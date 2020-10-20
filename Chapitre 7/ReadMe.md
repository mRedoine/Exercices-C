
1. Devise a function called min(x,y) that returns the smaller of two double values. Test
the function with a simple driver.

2. Devise a function chline(ch,i,j) that prints the requested character in columns i
through j . Test it in a simple driver.

3. Write a function that takes three arguments: a character and two integers. The character
is to be printed. The first integer specifies the number of times that the character is to
be printed on a line, and the second integer specifies the number of lines that are to be
printed. Write a program that makes use of this function.

4. The harmonic mean of two numbers is obtained by taking the inverses of the two
numbers, averaging them, and taking the inverse of the result. Write a function that
takes two double arguments and returns the harmonic mean of the two numbers.

5. Write and test a function called larger_of() that replaces the contents of two double
variables with the maximum of the two values. For example, larger_of(x,y) would
reset both x and y to the larger of the two.

6. Write and test a function that takes the addresses of three double variables as arguments
and that moves the value of the smallest variable into the first variable, the middle value
to the second variable, and the largest value into the third variable.

7. Write a program that reads characters from the standard input to end-of-file. For each
character, have the program report whether it is a letter. If it is a letter, also report
its numerical location in the alphabet. For example, c and C would both be letter 3.
Incorporate a function that takes a character as an argument and returns the numerical
location if the character is a letter and that returns –1 otherwise.

8. Chapter 6 , “C Control Statements: Looping,” ( Listing 6.20 ) shows a power() function
that returned the result of raising a type double number to a positive integer value.
Improve the function so that it correctly handles negative powers. Also, build into the
function that 0 to any power other than 0 is 0 and that any number to the 0 power is 1.
(It should report that 0 to the 0 is undefined, then say it’s using a value of 1.) Use a loop.
Test the function in a program.

9. Redo Programming Exercise 8, but this time use a recursive function.

10. Generalize the to_binary() function of Listing 9.8 to a to_base_n() function that
takes a second argument in the range 2–10. It then should print the number that is its
first argument to the number base given by the second argument. For example, to_
base_n(129,8) would display 201 , the base-8 equivalent of 129 . Test the function in a
complete program.

11. Write and test a Fibonacci() function that uses a loop instead of recursion to calculate
Fibonacci numbers.
