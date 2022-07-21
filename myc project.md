#### project 8

MapReduce is a programming model and an associated implementation for processing and generating large data sets with a parallel, distributed algorithm on a cluster. A MapReduce program is composed of a Map() procedure and a Reduce() procedure.

In this project, you are supposed to briefly introduce the framework of MapReduce (How does it work?), and implement a MapReduce program to count the number of occurrences of each word in a set of documents. Your task includes the following steps:

- Setup MapReduce libraries. A popular open-source implementation is Apache Hadoop.
- Write a parallel MapReduce program and a serial program to solve this problem. You are supposed to print your results in non-increasing order of the number of occurrences of words. If two or more words have the same number of occurrences, they must be printed in lexicographical order. Make sure that each line contains one word, followed by its number of occurrences, separated by a space, and there must be no extra space at the end of each line.
- Prepare appropriate test data. A set of documents (files) which contains a minimum of 100,000 words must be used for testing.
- Test your programs; make sure that the results are accurate. Then compare and analyze the performances between parallel and serial algorithms.
- Note that the hardware, the scale of your set of documents, and setting of Hadoop (the number of Map Task and Reduce Task) may all have impact on the performance. You must give specific analysis on each factor.

#### Project7

The skip list is a simple yet powerful data struture that efficiently supports find, insertion, and deletion. You may check the wikipedia for more information.

You are supposed to finish the following four tasks in this project.

1. present the strucutre of the skip list, and explain how the three operations are supported
2. give a formal analysis of each operation
3. implement skip list
4. measure the practical performance of skip list on inputs of different size

##### project6

Consider the following strip packing problem.

Input: you are given *n* rectangles, each having a width and a height. You are also given a bin with a given width. The height of bin can be as large as you want. (You may assume that the width of any rectangle is no more than the width of the bin.)

Output: you are required to packing the rectangle into the bin so that the height of the bin is minimized. Note that you are not allowed to rotate the rectangles, and that the rectangles should not overlap.

For more information, please refer to Wikipedia ([link](https://en.wikipedia.org/wiki/Strip_packing_problem)).

This project requires you to implement at least two polynomial-time approximation algorithms for this problem. You must generate test cases of different sizes (from 10 to 10,000) with different distributions of widths and heights, and compare the solution quality and the running time of the two algorithms on these test cases. A thorough analysis on all the factors that might affect the approximation ratio of your proposed algorithm is expected.
