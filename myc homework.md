

#### homwork11

No algorithm can have an approximation ratio less than 1.

T

F

------

1-2

分数 2

作者 Yuchen Mao

单位 浙江大学

For any instance, a 2-approximation algorithm must give a solution better than a 3-approximation algorithm.

T

F

------

1-3

分数 2

作者 叶德仕

单位 浙江大学

As we know there is a 2-approximation algorithm for the Vertex Cover problem. Then we must be able to obtain a 2-approximation algorithm for the Clique problem, since the Clique problem can be polynomially reduced to the Vertex Cover problem.

T

F

------

1-4

分数 2

作者 叶德仕

单位 浙江大学

Suppose ALG is an *α*-approximation algorithm for an optimization problem Π whose approximation ratio is tight. Then for every *ϵ*>0 there is no (*α*−*ϵ*)-approximation algorithm for Π unless P = NP.

For the bin-packing problem: let *S*=∑*S**i*. Which of the following statements is FALSE?

A.

The number of bins used by the next-fit heuristic is never more than ⌈2*S*⌉

B.

The number of bins used by the first-fit heuristic is never more than ⌈2*S*⌉

C.

The next-fit heuristic leaves at most one bin less than half full

D.

The first-fit heuristic leaves at most one bin less than half full

------

2-2

分数 2

作者 陈越

单位 浙江大学

To approximate a maximum spanning tree *T* of an undirected graph *G*=(*V*,*E*) with distinct edge weights *w*(*u*,*v*) on each edge (*u*,*v*)∈*E*, let's denote the set of maximum-weight edges incident on each vertex by *S*. Also let *w*(*E*′)=∑(*u*,*v*)∈*E*′*w*(*u*,*v*) for any edge set *E*′. Which of the following statements is TRUE?

A.

*S*=*T* for any graph *G*

B.

*S*=*T* for any graph *G*

C.

*w*(*T*)≥*w*(*S*)/2 for any graph *G*

D.

None of the above

------

2-3

分数 2

作者 沈鑫

单位 浙江大学

Assume that you are a real world Chinese postman, which have learned an awesome course "Advanced Data Structures and Algorithm Analysis" (ADS). Given a 2-dimensional map indicating *N* positions *p**i*(*x**i*,*y**i*) of your post office and all the addresses you must visit, you'd like to find a shortest path starting and finishing both at your post office, and visit all the addresses at least once in the circuit. Fortunately, you have a magic item "Bamboo copter & Hopter" from "Doraemon", which makes sure that you can fly between two positions using the directed distance (or displacement).

![Bamboo.jpg](https://images.ptausercontent.com/8d0adcd7-1fe2-44d5-a6cf-4aa97ab3346f.jpg)
("Bamboo copter & Hopter", japan12.com/bamboo-copter-hopter)

However, reviewing the knowledge in the ADS course, it is an *NPC* problem! Wasting too much time in finding the shortest path is unwise, so you decide to design a 2−*a**pp**ro**x**ima**t**i**o**n* algorithm as follows, to achieve an acceptable solution.

```
Compute a minimum spanning tree T connecting all the addresses.
Regard the post office as the root of T.
Start at the post office.
Visit the addresses in order of a _____ of T.
Finish at the post office.
```

There are several methods of traversal which can be filled in the blank of the above algorithm. Assume that *P*=*NP*, how many methods of traversal listed below can fulfill the requirement?

- Level-Order Traversal
- Pre-Order Traversal
- Post-Order Traversal

A.

0

B.

1

C.

2

D.

3

#### homework 12

1-1

分数 2

作者 陈越

单位 浙江大学

For the graph given in the following figure, if we start from deleting the black vertex, then local search can always find the minimum vertex cover.

![img](https://images.ptausercontent.com/150)

T

F

------

1-2

分数 3

作者 叶德仕

单位 浙江大学

We are given a set of sites *S*={*s*1,*s*2,⋯,*s**n*} in the plane, and we want to choose a set of *k* centers *C*={*c*1,*c*2,⋯,*c**k*} so that the maximum distance from a site to the nearest center is minimized. Here *c**i* can be an arbitrary point in the plane.

A local search algorithm arbitrarily choose *k* points in the plane to be the centers, then

- (1) divide *S* into *k* sets, where *S**i* is the set of all sites for which *c**i* is the nearest center; and
- (2) for each *S**i*, compute the central position as a new center for all the sites in *S**i*.

If steps (1) and (2) cause the covering radius to strictly decrease, we perform another iteration, otherwise the algorithm stops.

When the above local search algorithm terminates, the covering radius of its solution is at most 2 times the optimal covering radius.

T

F

------

1-3

分数 3

Local search algorithm can be used to solve lots of classic problems, such as SAT and *N*-Queen problems. Define the configuration of SAT to be *X* = vector of assignments of *N* boolean variables, and that of *N*-Queen to be *Y* = positions of the *N* queens in each column. The sizes of the search spaces of SAT and *N*-Queen are *O*(2*N*) and *O*(*N**N*), respectively.

2-1

分数 4

作者 叶德仕

单位 浙江大学

**Spanning Tree Problem**: Given an undirected graph *G*=(*V*,*E*), where ∣*V*∣=*n* and ∣*E*∣=*m*. Let *F* be the set of all spanning trees of *G*. Define *d*(*u*) to be the degree of a vertex *u*∈*V*. Define *w*(*e*) to be the weight of an edge *e*∈*E*.
We have the following three variants of spanning tree problems:

- (1) Max Leaf Spanning Tree: find a spanning tree *T*∈*F* with a maximum number of leaves.
- (2) Minimum Spanning Tree: find a spanning tree *T*∈*F* with a minimum total weight of all the edges in *T*.
- (3) Minimum Degree Spanning Tree: find a spanning tree *T*∈*F* such that its maximum degree of all the vertices is the smallest.

For a pair of edges (*e*,*e*′) where *e*∈*T* and *e*′∈(*G*−*T*) such that *e* belongs to the unique cycle of *T*∪*e*′, we define **edge-swap(\*e\*,\*e\*′)** to be (*T*−*e*)∪*e*′.

Here is a local search algorithm:

```
T = any spanning tree in F;
while (there is an edge-swap(e, e') which reduces Cost(T)) {
    T = T - e + e';
}
return T;
```

Here `Cost(T)` is the number of leaves in `T` in Max Leaf Spanning Tree; or is the total weight of `T` in Minimum Spanning Tree; or else is the minimum degree of `T` in Minimum Degree Spanning Tree.

Which of the following statements is TRUE?

A.

The local search always return an optimal solution for Max Leaf Spanning Tree

B.

The local search always return an optimal solution for Minimum Spanning Tree

C.

The local search always return an optimal solution for Minimum Degree Spanning Tree

D.

For neither of the problems that this local search always return an optimal solution

------

2-2

分数 4

作者 叶德仕

单位 浙江大学

There are *n* jobs, and each job *j* has a processing time *t**j*. We will use a local search algorithm to partition the jobs into two groups A and B, where set A is assigned to machine *M*1 and set B to *M*2. The time needed to process all of the jobs on the two machines is *T*1=∑*j*∈*A**t**j*, *T*2=∑*j*∈*B**t**j*. The problem is to minimize ∣*T*1−*T*2∣.

Local search: Start by assigning jobs 1,…,*n*/2 to *M*1, and the rest to *M*2.
The local moves are to move a single job from one machine to the other, and we only move a job if the move decreases the absolute difference in the processing times. Which of the following statement is true?

A.

The problem is NP-hard and the local search algorithm will not terminate.

B.

When there are many candidate jobs that can be moved to reduce the absolute difference, if we always move the job *j* with maximum *t**j*, then the local search terminates in at most *n* moves.

C.

The local search algorithm always returns an optimal solution.

D.

The local search algorithm always returns a local solution with 21*T*1≤*T*2≤2*T*1.

------

2-3

分数 4

作者 叶德仕

单位 浙江大学

Max-cut problem: Given an undirected graph *G*=(*V*,*E*) with positive integer edge weights *w**e*, find a node partition (*A*,*B*) such that *w*(*A*,*B*), the total weight of edges crossing the cut, is maximized. Let us define *S*′ be the neighbor of *S* such that *S*′ can be obtained from *S* by moving one node from *A* to *B*, or one from *B* to *A*. We only choose a node which, when flipped, increases the cut value by at least *w*(*A*,*B*)/∣*V*∣. Then which of the following is true?

A.

Upon the termination of the algorithm, the algorithm returns a cut (*A*,*B*) so that 2.5*w*(*A*,*B*)≥*w*(*A*∗,*B*∗), where (*A*∗,*B*∗) is an optimal partition.

B.

The algorithm terminates after at most *O*(log∣*V*∣log*W*) flips, where *W* is the total weight of edges.

C.

Upon the termination of the algorithm, the algorithm returns a cut (*A*,*B*) so that 2*w*(*A*,*B*)≥*w*(*A*∗,*B*∗).

D.

The algorithm terminates after at most *O*(∣*V*∣2) flips.
