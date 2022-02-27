# Advanced-Datastructure-and-Algorithms

上课用手写投影, 没有slide, 

1点15-3:40 

pre和期中考试在9 10节课进行

### 大纲

AVL 树, 红黑树, B+树, 

均摊分析, 很多学校研究生才学,

贪心

NP

近似算法

随机算法, 

并行算法,

外部内存算法

给分, 作业10分, 期中考10分(比期末考低就按期末考算,期末考90分就算90分), 讨论10分, project10分, bonus 5分, 期末考40分.

讨论, 

project,  8 选2 , 第一个project, report和pre, 第二个只用report. 随机选一个speaker, 每个project 最多4个组. 

report 用英语, 不超过10页, 12分, single space

bonus 最多5分, 一个extra project 1分, 交report. 往年一次QA就0.5分

###  第一节课

维护一个完全二叉树, 时间复杂度太大

hl - hr 绝对值小于1 , 那就叫平衡树.   

#### AVL树

平衡的BST. 

lemma : 一个平衡二叉树有n个节点, must have height lgn.

 左旋转, 右旋转, O1时间保留了BST的性质. 

插入怎么恢复平衡?  修复最低的不平衡的点即可

哪些节点的平衡会出问题?     路径上的节点会出问题

最低的不平衡的点, 左右子树高度差是2 . 

L case u节点左边比右边高2 , R case 反之.  v节点就是高的那个子树的root. 

 sibling 兄弟姐妹

##### LL case

v节点左边h+1 高, 右边 h高,u节点不平衡, 就把u改成v的右节点. 

##### LR case

v节点右边h+1 高, 左边 h高,u节点不平衡. 这里就要v节点右边的w, 做一次左旋, 再做一次右旋. 就是让w左节点为v, 右节点为u. 
LL case: u的左子树高度>右子树高度，v的左子树高度>=右子树高度
RR case: u的右子树高度>左子树高度，v的右子树高度>=左子树高度

##### 删除

u is a leaf,

u has only child v v必须是leaf.

u有两个children,  先和右边子树最左边的叶节点互换,然后删掉叶子, 

边更新高度边修复平衡,

