# FCTRL2 - Rating 648

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Small factorials

You are asked to calculate factorials of some small positive integers.

### Input

An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1 <= n <= 100

### Output

For each integer n given at input, display a line with the value of n!

 **Note:**  For larger numbers, their factorial can overflows any available numeric data type in C.

### Sample 1:
Input
Output

```
4
1
2
5
3
```

```
1
2
120
6
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T13:48:29.581Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

long long fac(long long N){
    if(N<=1)return N;
    return N*fac(N-1);
}
int main() {
	int T;
	cin>>T;
	while(T--){
	    long long N;
	    cin>>N;
	    cout<<fac(N)<<endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FCTRL2)