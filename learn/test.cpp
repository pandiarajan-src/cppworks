
#include <iostream>
double sum( double scores[]){
 
    double score_sum{};
    unsigned int count = sizeof(scores) / sizeof(double);
 
   for(size_t i{0} ; i < count ; ++i){
       score_sum += scores[i];
   }
    return score_sum;
}
 
 
int main(){
 
   double my_scores[]{10.0,20.0,30.0,40.0};
   double result = sum(my_scores);
   std::cout << "result : " << result << std::endl;
 
    return 0;
}