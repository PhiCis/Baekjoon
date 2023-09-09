# [Gold II] Digital Content Protection - 9332 

[문제 링크](https://www.acmicpc.net/problem/9332) 

### 성능 요약

메모리: 2808 KB, 시간: 992 ms

### 분류

자료 구조, 트리, 트리를 사용한 집합과 맵

### 문제 설명

<p>Dan is working for a digital content protection company, which is responsible for the content protection of blu-ray discs based on a standard called Anti Content Misuse (ACM).</p>

<p>The ACM standard works as follows. Assume there are 2<sup>n</sup> blu-ray drives/players. We represent these 2<sup>n</sup> drives as the leaves of a complete binary tree of height n, so that each root-to-leaf path consists of n edges. Each node u in this binary tree is assigned an identiﬁer number and contains a random key k<sub>u</sub>. The identiﬁer numbers are assigned as follows. The root, r, is assigned 1. In addition, the left and right children of an internal node having number i are assigned numbers 2i and 2i + 1, respectively. This scheme assigns a distinct number to each node in the tree. The keys contained in the nodes are unknown to blu-ray users, but they are available to blu-ray drive manufacturers. Each blu-ray player is assigned the identiﬁer number i (2<sup>n</sup> ≤ i ≤ 2<sup>n+1</sup>−1) of its corresponding leaf in the tree. A manufacturer of blu-ray drives embeds the keys associated with the nodes in the path from the root to leaf number i in player number i.</p>

<p>To encrypt the content of a blu-ray disc, the company in charge creates a random key k called the master key. First, they encrypt k with the key k<sub>r</sub> (recall r is the root node of binary tree) and write it on the disc as a header. Then, they encrypt the content with k, and write the encrypted data on the blu-ray disc. A blu-ray drive ﬁrst decrypts the header using key k<sub>r</sub> embedded in it and recovers the master key k and then, decrypts the content using the key k.</p>

<p>Unfortunately, the keys embedded in a set of blu-ray drives, R, are exposed by hackers and published on the web. As a result, we cannot encrypt the master key k using any of these exposed keys. For example, since all blu-ray drives contain k<sub>r</sub>, the encryption scheme above does not work any more. There is a solution oversaw for this situation in the ACM standard. At the cost of a larger header, the industry can safely encrypt the content of a new blu-ray disc. They carefully choose a subset of unexposed keys K in the binary tree such that all blu-ray drives, except for drives in R, have at least one of the keys in K. They encrypt the master key k with each key k′ ∈ K and put the result in the header (i.e., there are |K| ciphertexts in the header). Now, each active blu-ray drive can decrypt at least one of the ciphertexts in the header and can recover the master key k. Dan needs your help to determine a subset of keys K with minimum cardinality (which results in the smallest header) given the identiﬁers of hacked drives.</p>

### 입력 

 <p>The input consists of a single test case. A test case consists of two lines. The ﬁrst line contains two integers n and |R|, where 1 ≤ n ≤ 62 and 1 ≤ |R| ≤ 1000. |R| is the cardinality of R, the set of exposed drives. The second line contains |R| integers, which are the identiﬁers of exposed blu-ray drives. You can assume that there is at least one blu-ray drive not hacked.</p>

### 출력 

 <p>Display the identiﬁers of nodes corresponding to the keys in K, satisfying the above requirements and having minimum cardinality, in increasing order and separated with single spaces.</p>

