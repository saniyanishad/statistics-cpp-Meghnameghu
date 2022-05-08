#include "stats.h"

#include<cmath>
#include<bits/stdc++.h>

template<typename T> Statistics::Stats<>::Stats(){}
template<typename T> Statistics::Stats<T,T,T>::Stats(T average,T max,T min):average(average),max(max),min(Min){}
template<typename T> Statistics::Stats<T> Statistics::ComputeStatistics(const std::vector<T>& data)
Stats Statistics::ComputeStatistics(const std::vector<___>& ) {
   {
    Stats<T> st;
    if(data.size()==0)
    {
       st.average=NAN;
       st.max=NAN;
       st.min=NAN;
    }
    
    st.Max=*max_element(data.begin(),data.end());
    st.Min=*min_element(data.begin(),data.end());
    T sum=accumulate(data.begin(), data.end() , 0);
    st.Average=(sum/data.size());
    return st;
  }
    


