#include "stats.h"
#include "vector"
#include<cmath>
#include<bits/stdc++.h>
//Stats Statistics::Computedstatistics(const std::vector<___>&
template<typename T> Statistics::Stats<T> Statistics::ComputeStatistics(const std::vector<T>& data)
 
    Stats<T> std;
     if(data.size()==0)
    {
       std.Average=NAN;
       std.Max=NAN;
       std.Min=NAN;
    }
    
    std.Max=*max_element(data.begin(),data.end());
    std.Min=*min_element(data.begin(),data.end());
    T sum=accumulate(data.begin(), data.end() , 0);
    std.Average=(sum/data.size());
    return std;
  }
    


