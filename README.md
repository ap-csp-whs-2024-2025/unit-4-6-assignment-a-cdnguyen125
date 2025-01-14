[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=17711135)
# unit-4-6-assignment-a

## To compile code
All code must be compiled before you can run it.  To compile means that you are converting your C++ code into a language that the computer can understand (e.g., binary).  To compile C++ code, run the following command in a terminal:
```
g++ fileName.cpp -o outFileName
```
This tells the C++ compiler to compile your file named `fileName.cpp`, and output it (`-o`) as a file named `outFileName`.

## To run code
After you have compiled the code, run your output file by running
```
./outFileName
```

## Compile and Run Example
Suppose I have a file named `classwork.cpp`.  I compile and run the file by doing
```
g++ classwork.cpp -o output
./output
```

# Instructions
Do the following in the file named `homework.cpp`.
1. Create a procedure named `compare` that takes in two numbers as parameters, and compares them together.  If the first input is larger than the second, then display `"input1 is greater than input2"`.  If the first input is smaller than the second, then display `"input1 is smaller than input2"`.  If they are equal, then display `"the inputs are equal"`.

**Sample Output**
```
compare(2, 4)
2 is less than 4

compare (9, 4)
9 is greater than 4

compare(3, 3)
the inputs are equal
```
2. Create a procedure named `quadForm` that takes in three numbers as parameters - `a`, `b`, and `c`, and computes the quadratic formula for a quadratic of the form

$$ y = ax^2 + bx + c. $$

Display the two answers in the format shown in the example output.  You may assume that the input `a` will never be 0.  For your reference, the two solutions are given by the following formula

$$ x = \frac{-b\pm\sqrt{b^2-4\cdot a\cdot c}}{(2\cdot a)}. $$

Use the `sqrt()` procedure for the square root.  Note that your program will crash if you get an imaginary number as an answer.

**Sample Outputs**
```
quadForm(1, -5, 6)
The answers are 2.0 and 3.0

quadForm(1, 9, 14)
The answers are -7.0 and -2.0
```
3. Create a procedure named `minList` that takes in a vector of `int` as parameters, and displays the minimum element of the list.  Assume that the list always has at least one element in it.

**Sample Outputs**
```
std::vector<int> listA = {1, 2, 3};
std::vector<int> listB = {3, 2, 1, 0};
std::vector<int> listC = {-1, -5, -5, -3};

minList(listA)
The minimum is 1

minList(listB)
The minimum is 0

minList(listC)
The minimum is -5
```
