# BIN_BAT - Rating 781

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T04:13:21.142Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    vector<int>A(N);
	    int ans=0;
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        ans+=A[i];
	    }
	    if(N%2!=0){
	        cout<<-1<<endl;
	    }
	    else if(ans>=0){
	        cout<<ans/2<<endl;
	    }
	    else if(ans<0){
	        cout<<(ans-(ans*2))/2<<endl;
	    }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BIN_BAT)