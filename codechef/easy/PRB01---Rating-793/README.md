# PRB01 - Rating 793

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T08:50:52.290Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    string arr[N];
	    int f=0,s=0;
	    for(int i=0;i<N;i++){
	        cin>>arr[i];
	        if(arr[i]=="START38"){
	            f++;
	        }
	        else{
	            s++;
	        }
	    }
	    cout<<f<<' '<<s<<endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PRB01)