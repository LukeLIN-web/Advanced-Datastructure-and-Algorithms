## project1

我们组拿了17分

第一组:

空间复杂度和树的结构有关

loop比 递归快.

正太分布 

随机插入, 随机查找, 随机删除 BST 最快. 

skewed query, 90% , 95%, 99%的比例. 99%的时候才splay tree快.   因为就优化了BST loop , 没优化后面几个. 

第二组的优点:

 再次讲解数据结构

## proj2

我们组拿了19分

8-1 Shortest Path Algorithm with Heaps (10 分)

Shortest path problems are ones of the most fundamental combinatorial optimization problems with many applications, both direct and as subroutines in other combinatorial optimization algorithms. Algorithms for these problems have been studied since 1950's and still remain an active area of research.

In this project you are supposed to compute the shortest paths using Dijkstra's algorithm. The implementation shall be based on a min-priority queue, such as a Fibonacci heap. The goal of the project is to find the best data structure for the Dijkstra's algorithm.

Your tasks are:

- (1) Implement the algorithm with at least two different heap structures, while Fibonacci heap must be one of them.
- (2) Use the USA road networks for evaluation. The data sets can be downloaded from http://www.dis.uniroma1.it/challenge9/download.shtml which provides the benchmarks for the **9th DIMACS Implementation Challenge**. (**Note:** you must **only list the download links** of these test data sets instead of uploading them with your reports.)
- (3) At least 1000 pairs of query are required in evaluating the run times of the algorithm with various of implementations.

### Grading Policy:

**Programming:** Implement Dijkstra's algorithm with Fibonacci heap and other heaps (6 pts.). Write a test of performance program (3 pts.). **All the codes must be sufficiently commented.**

**Testing:** Provide the necessary inputs for testing and give the run time table (2 pts.). Plot the run times vs. input sizes for illustration (2 pts.). Write analysis and comments (3 pts.).

**Documentation:** Chapter 1 (1 pt.), Chapter 2 (2 pts.), and finally a complete report (1 point for overall style of documentation).

已经实现的, vertex本身就会记录distanceFromSource.

http://www.diag.uniroma1.it//challenge9/data/tiger/DC.tmp.gz 下载 了DC的数据集, 用 python处理一下. 留下source, target .



 太恶心了. binomial queue, pop需要merge 树. decrease key 需要find.  这个没有parent. 裂开了, 又白改了. 整个链表都耦合在一起, 必须全都自己写.   别人的如果是错的都不知道哪里错了. 

我有一个坏毛病就是, 失败了不提交, 其实很重要的是写下来失败的时候哪里错了, 把代码也记录下来, 没准之后的结果更差.

devljy的问题:  6 4 0 的时候,  插入7 ,head是4 而不是0 .

原因: 

6 7 合,  

pop问题:

只有一个head的时候,  remove node.

把节点也交换了就行了. 

 换图， 每个图都从0开始跑。 

 

#### Proj3

最大团算法， NP问题

第一组也用2的n次方。

