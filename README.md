Sorting algorithms & Big O

Sorting algorithms are a set of procedures used to rearrange a collection of items in a specific order. The most common sorting algorithms include bubble sort, selection sort, insertion sort, merge sort, quick sort, and heap sort.

Big O notation is a mathematical representation used to describe the efficiency of an algorithm in terms of the size of its input. It provides a way to analyze the performance of algorithms by measuring the rate at which the algorithm's running time increases as the input size increases.

In the context of sorting algorithms, Big O notation is used to analyze the time complexity of each algorithm, which is the amount of time it takes to execute the algorithm as a function of the input size. For example, if the input size is n, the time complexity of an algorithm may be O(n), O(n^2), O(n log n), etc. The best sorting algorithms have a time complexity of O(n log n), which means they can sort an array of n items in a time proportional to n log n, making them efficient for large input sizes.


Requirements
General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project, is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions should be included in your header file called sort.h
    Don’t forget to push your header file
    All your header files should be include guarded
    A list/array does not need to be sorted if its size is less than 2.

Compilation

All files were compiled on Ubuntu 14.04 LTS.

All programs and functions were compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic.

Styling

All files have been written in the Betty Style.

Authors

Isoghena Ewaia - Github estherewaia@gmail.com
Gilbert Adikankwu - Github gilbertadikankwu@gmail.com
