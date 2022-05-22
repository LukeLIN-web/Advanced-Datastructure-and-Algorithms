

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

