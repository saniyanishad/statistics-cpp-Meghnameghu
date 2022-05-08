#include "stats.h"

#include<cmath>
#include<bits/stdc++.h>
//Stats Statistics::Computedstatistics(const std::vector<___>&
template<typename T> Statistics::Stats<>::Stats(){}
template<typename T> Statistics::Stats<T> Statistics::ComputeStatistics(const std::vector<T>& data)
   {
    Stats<T> st;
    if(data.size()==0)
    {
       st.Average=NAN;
       st.Max=NAN;
       st.Min=NAN;
    }
    
    st.Max=*max_element(data.begin(),data.end());
    st.Min=*min_element(data.begin(),data.end());
    T sum=accumulate(data.begin(), data.end() , 0);
    st.Average=(sum/data.size());
    return st;
  }
    


