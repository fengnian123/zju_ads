There are five main .cpp files
①project3_No_pruning.cpp：This file is the solution without pruning optimization
  Operation method: Compile and run directly in the programming software, input the data in line with the topic (you can choose to use mytest data in mytest.txt or input yourself)；The output of the program is an answer that matches the format of the question

②project3_with_pruning.cpp：This file is the solution with pruning optimization
  Operation method: Compile and run directly in the programming software, input the data in line with the topic (you can choose to use mytest data in mytest.txt or input yourself)；The output of the program is an answer that matches the format of the question

③project3_No_pruning(Test version).cpp：This program is used to test project3_No_pruning.cpp
  Operation method: The test data needs to be stored in rand_test.txt. You need to open Samples_product.cpp first, directly compile and run, input the test times and the number of beads in the store, and then the corresponding data will be randomly generated and written into rand_test.txt. Finally, open project3_No_pruning(Test version).cpp to compile and run directly. The program will read the data in rand_test.txt and run it.
 if you want to test with your own data,please modify rand_test.txt. Please make sure that the format is: the first line is the times of tests, then is the corresponding number of data (format as required by the question).
 for example:
2 // It mains there are 2 input
RYg5// The first input
8
gY5Ybf
8R5
12346789
gRg8h
5Y37
pRgYgbR52
8Y
8g
YrRR8RRrY // The second input
3
ppRGrrYB225
8ppGrrB25
Zd6KrY
 
The output is the result of each test and the final average time
④project3_with_pruning(Test version).cpp：This program is used to test project3_with_pruning.cpp
  Operation：the same as ③

⑤Sample_product.cpp: This program is used to produce test data.
  operation method: Compile and run directly (you may need to add "-std=c++11" before compile)
  