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
**Submitted:** 2026-10-06T05:00:25.290Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int>ans;
	    ans.push_back(1);
	    for(int x=2;x<=N;x++){
	        int carry=0;
	        for(size_t i=0;i<ans.size();i++){
	            int prod=ans[i]*x+carry;
	            ans[i]=prod%10;
	            carry=prod/10;
	        }
	    while(carry){
	        ans.push_back(carry%10);
	        carry/=10;
	    }     
	    }
	    for(int i=ans.size()-1;i>=0;i){
	        cout<<ans[i];
	    }
	    cout<<"\n";
	}
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FCTRL2)