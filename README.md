# Algorithms
   ## Types of programming languages
  A programming language consists of a vocabulary containing a set of grammatical rules intended to convey instructions to a computer or computing device to perform specific tasks.
Each programming language has a unique set of keywords along with a special syntax to organize the software’s instructions.
### High level languages
Are written in a form that is close to our human language, enabling to programmer to just focus on the problem being solved.
 No particular knowledge of the hardware is needed as  high level languages create programs that are portable and not tied to a particular computer or microchip.
These programmer friendly languages are called ‘high level’ as they are far removed from the  machine code instructions understood by the computer.
- Some examples: C++, Java, Pascal, Python, Visual Basic. 

**Advantages**
-   Easier to modify as it uses English like statements
-   Easier/faster to write code as it uses English like statements
-   Easier to debug during development due to English like statements
-   Portable code – not designed to run on just one type of machine
### Low level 
Are used to write programs that relate to the specific architecture and hardware of a particular type of computer.
They are closer to the native language of a computer binary, making them harder for programmers to understand.
 - Some examples: Assembly Language, Machine Code

**Advantages**
-   Can make use of special hardware or special machine-dependent instructions 
-    Translated program requires less memory
-   Write code that can be executed faster
-   Total control over the code
-   Can work directly on memory locations
###  FEATURES OF PROGRAMMING LANGUAGES
-   **Simplicity:** the language must offer clear and simple concepts that facilitate its learning and application.
-   **Naturalness**: This means that its application in the area for which it was designed must be done naturally, providing operators, structures and syntax for operators to work efficiently.
-   **Abstraction**: It is the ability to define and use complicated structures or operations while ignoring some details, which influences writing ability.
-   **Efficiency**: Programming languages must be translated and executed efficiently so as not to take up too much memory space or require too much time.
-   **Structuring**: The language allows programmers to write their codes according to structured programming concepts, to avoid creating errors.
-   **Compactness**: With this characteristic, it is possible to express operations concisely, without having to write too many details.
-   **Locality**: Refers to the codes concentrating on the part of the program with which you are working at a given time.

## Program structure

   
### Bookstores

    #include <stdlib.h>  /* header defines four variable types, several macros, and various functions for performing general functions. */
    #include <stdio.h> /*is a preprocessor command, which tells a C compiler to include stdio.h file before going to actual compilation.*/
    
    int main(){
	  } /* is the main function where the program execution begins */ 
   
   ### Variables
   
    int // integet  
    char // character 
    short // is a short integer 
    long // longer 
    float // a number with decimals
    double // type varible is a 64-bit floatng
###  Start -Body-End

    #include <stdlib.h>
    #include <stdio.h>
     int main(){
	     printf("hello karla");
     }
   ### Keywords or Reserved words
   Are the words whose meaning has already been explained to the 'C' compiler.
 
   - Keyword serves as building blocks for program statements
   - All keywords written in lower case letters.
   - Every keyword performs some specific task.
   There are some basics are:
   

    if else { }
    switch case { }
    default
Used for decision control programming structure. 

    break 
Used with any loop OR switch case

    int 
    float 
    char 
    double
    long
Used during variable declaration.

    for { }
    while { } 
    do { }
  There are types of loop structures 
   

    void 
   One of the return type
   

    return 
   This keyword is used for returning a value 
   
   ### Constants 
   Is a value or variable that can't be changed in the program, there are different types:
   ##### Integer 
   These values never change during the execution of a program.
   1. Decimal constant contains digits from 0-9 
  2. Octal constant contains digits from 0-7, and there types of constants are always preceded by 0
   3.  Hexadecimal constant contains a digit from 0-9 as well as characters from A-F. Hexadecimal constants are always preceded by 0X
  ##### Character 
 Contains only a single character enclosed within a single quote ('').
 ##### String 
 Contains a sequence of characters enclosed within double quotes ("")
 ### Operators 
 Is a symbol that tells the compiler to perform specific mathematical or logical functions
  - Arithmetic 
    
        A + B / / add two operands 
        A - B / / Subtracts 
        A * B / /   Multiples 
        A / B / /Divides
        B % A / / Modulus 
        A++ / / increment 

- Rational 

       A !=B / / is true 
       A == b // is false 
       A > B / / more that
       A < B / / less that
	   A >= B  / / more equal that
	   A <= B / / less equal that
- Logical 
    
       || / / called logical OR
       && // called logical And
       ! / / called logical NOT
   
## Debugging 
Is the process of detecting and removing of existing and potential errors in a software code that can cause it to behave unexpectedly or crash


## Types of program errors 
    1. Syntax errors: Errors due to he fact that the syntax of the language is not respect. 
    

      int a = 10 // missing (;)  is a semicolon
   2. Semantic errors:  Errors due to an improper use of program statements. 
   

        `int i;
     i++; // the variable i is not initialized here`
     3. Logical errors: Errors due to the fact that the specification is not respected
 

       public static int sum(int a, int b) {
        return a - b ;
        } /* this method returns the wrong value wrt the specification that require to sum two integers */
    4. Compile time errors: Syntax errors and static semantic errors indicated by the compiler.
    
           int a, b, x;
           a = 10;
           b = Integer.parseInt(kb.readLine());
           x = a / b;  //ERROR if b = 0
