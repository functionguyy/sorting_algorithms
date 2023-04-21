# 0x1B. C - Sorting algorithms & Big O


## Learning Objectives
- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an
algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

## At least four different sorting algorithms

A sorting algorithm is an algorithm that puts element of a list into an order.
A set of procedures used to rearrange a collection of items in a specific order.
The most frequently used orders are numerical order and
lexicographical(alphabetic) order, and either ascending and descending.
The most common sorting algorithms include bubble sort, selection sort, 
insertion sort, merge sort, quick sort, and heap sort. The development and
choice of algorithms is rarely based on best case performance.

## What is the Big O notation, and how to evaluate the time complexity of an algorithm

In computer science, Big O notation is used to classify algorithms according to 
how their run time and space requirements grows in terms of the size of the 
input. It provides a way to analyze the performance of algorithms by measuring 
the rate at which the algorithm's running time increases as the input size 
increases.

In the context of sorting algorithms, Big O notation is used to analyze the time
complexity of each algorithm, which is the amount of time it takes to execute 
the algorithm as a function of the input size. For example, if the input size 
is n, the time complexity of an algorithm may be O(n), O(n^2), O(n log n), etc.

Enumerating the basic operations (comparison and exchanges) than an algorithm
perfoms, we also must consider the costs of the operations, and we generally
find it worthwhile to focus on the most frequently executed operations (the
inner loop of the algorithm)

comparison sort algorithms have a time complexity of O(n log n), which means 
they can sort an array of n items in a time proportional to n log n, making them
efficient for large input sizes.



## Compilation
- All files were compiled on Ubuntu 20.04 LTS.
- All programs and functions were compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic.

## Styling

All files have been written in the Betty Style.

## Authors

- [Isoghena Ewaia](estherewaia@gmail.com)
- [Gilbert Adikankwu](gilbertadikankwu@gmail.com)
