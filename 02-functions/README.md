1. C Functions: "Greeting Machine"
Write a function void greet() that prints a welcome message. Call it three times from main(). Then write int square(int n) that returns the square of a number and print the result.

2. C Function Parameters: "Rectangle Calculator"
Write int area(int length, int width) and int perimeter(int length, int width). Take the values from the user with scanf and print both results. Bonus: add a default-like behavior by writing a second function squareArea(int side) that reuses area().

3. C Pass By Reference: "Swap Wizard"
Write void swap(int *a, int *b) to swap two numbers. Print the values before and after the call to prove they changed. Bonus: write void minMax(int arr[], int size, int *min, int *max) that returns both the smallest and largest values through pointers.

4. C Scope: "Counter Showdown"
Create a global variable int counter = 0, a function that increments it, and a function with a local variable of the same name that shadows it. Also write a function using a static int counter. Print the values from all three and explain why they differ.

5. C Function Declaration: "Prototype Practice"
Write a program where main() appears at the top of the file and calls isEven(int n) and factorial(int n) that are defined below it. Use function prototypes so it compiles. Then remove the prototypes to see the compiler warning or error.

6. C Functions Challenge: "Mini Calculator"
Build a menu-driven calculator with separate functions add, subtract, multiply, and divide. Handle division by zero, and loop until the user chooses Exit. Bonus: add power(int base, int exp) without using the math library.

7. C Math Functions: "Circle and Triangle Toolkit"
Include <math.h>. Write functions that:

compute the circle area using M_PI and pow()
compute the hypotenuse of a right triangle using sqrt()
round a user-entered decimal using ceil(), floor(), and round()

Remember to compile with -lm on Linux.

8. C Inline Functions: "Speed Boost Helpers"
Write static inline int max(int a, int b) and static inline int isPositive(int n). Call them inside a loop that processes 10 numbers. Compare the code with an equivalent #define macro and note one difference, such as type safety.

9. C Recursion: "Recursive Trio"
Write three recursive functions:

int factorial(int n)
int fibonacci(int n)
int sumDigits(int n)

Bonus: write void countdown(int n) that prints from n down to 1 and then prints "Liftoff!"

10. C Function Pointers: "Operation Selector"
Create four functions (add, sub, mul, divide), then store them in an array of function pointers. Let the user pick an operation by index (0 to 3) and call it through the pointer. Bonus: write void apply(int a, int b, int (*op)(int, int)) that accepts a function pointer as a parameter.