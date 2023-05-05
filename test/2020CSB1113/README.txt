There are 8 files in this folder : delimiters.txt, Gene.pl, gene.txt, README.txt, text.txt, Token.pl, Truck.pl and truck.txt.

Excercise 1 : Count.l

    The Following Instructions Should Be Followed While Running The Program :
    A. Open the terminal in the directory 2020CSB1113 and Enter the following commands to run the program :
        1. lex Count.l
        2. cc -lfl lex.yy.c
        3. ./a.out input.txt
    B. If you want to give some input to the program you can store it in the input.txt file in separate lines.
    C. The program will perform a regex check and output the number of characters, spaces, words and lines.
    D. Run the program only when there is input.txt file along with Count.l file.

Excercise 2 : Comments.l

    The Following Instructions Should Be Followed While Running The Program :
    A. Open the terminal in the directory 2020CSB1113 and Enter the following commands to run the program :
        1. lex Comments.l
        2. cc -lfl lex.yy.c
        3. ./a.out input.txt
    B. If you want to give some input to the program you can store it in the input.txt file in separate lines.
    C. The program will perform a regex check and output the number of lines commented and other text will be stored by it in code.c file.
    D. Run the program only when there is input.txt file along with Comments.l file.


Excercise 3 : ab.y

    The Following Instructions Should Be Followed While Running The Program :
    A. Open the terminal in the directory 2020CSB1113 and Enter the following commands to run the program :
        1. lex ab.l
        2. yacc -d ab.y
        3. gcc lex.yy.c y.tab.c -lfl
        4. ./a.out
    B. If you want to give some input to the program you can Enter it in the command line after running the program, after you've given input press Ctrl + D.
    C. The program will perform a regex check and output whether the entered sequence of characters is VALID or INVALID.
    D. Run the program only when there is ab.l file along with ab.y file.
    E. I've assumed that the input fill be of format a^nb and there would be no character after b except \n.


Excercise 4 : calc.l

    The Following Instructions Should Be Followed While Running The Program :
    A. Open the terminal in the directory 2020CSB1113 and Enter the following commands to run the program :
        1. lex calc.l
        2. cc -lfl lex.yy.c
        3. ./a.out input.txt
    B. If you want to give some input to the program you can store it in the input.txt file in separate lines.
    C. The program will perform a regex check and output the number of integers, identifiers, operators and brackets.
    D. Run the program only when there is input.txt file along with calc.l file.
    E. I've assumed that the operators would only be +, -, * and /, also that the operands would only be integers of variables.
    F. The program will output the number of integers, identifiers, operators and brackets regardless of VALID or INVALID expression.

Excercise 5 : calc.y

    The Following Instructions Should Be Followed While Running The Program :
    A. Open the terminal in the directory 2020CSB1113 and Enter the following commands to run the program :
        1. lex calc_.l
        2. yacc -d calc.y
        3. gcc lex.yy.c y.tab.c -lfl
        4. ./a.out
    B. If you want to give some input to the program you can Enter it in the command line after running the program, after you've given input press Ctrl + D.
    C. The program will perform a regex check and output the computed value of the expression and print it.
    D. Run the program only when there is calc_.txt file along with calc.y file.
    E. I've assumed that the operators would only be +, -, * and /, also that the operands would only be integers.