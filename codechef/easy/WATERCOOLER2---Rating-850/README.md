# WATERCOOLER2 - Rating 850

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T16:22:38.497Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	     if(N<=1){
	            cout<<"no\n";
	            continue;
	     }
	     int count=0;
	    for(int i=2;i<=N/2;i++){
	        if(N%i==0){
	            count++;
	        }
	    }
	    if(count>0){
	        cout<<"no\n";
	    }
	    else{
	        cout<<"yes\n";
	    }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/WATERCOOLER2)