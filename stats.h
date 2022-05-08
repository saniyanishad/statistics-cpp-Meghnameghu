#include<iostream>
#include <vector>
#include<math.h>
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

    namespace Statistics
{
    
	template <typename M=double>
	class Stats
   	 {
	   public:
		M Average;
		M Max;
		M Min;
		Stats();
		//Stats(float avg,float max,float min);
		Stats(M average,M Max,M Min);
	};
	template<typename T=double>
	Stats<M> ComputeStatistics(const std::vector<M>& );
    
}
