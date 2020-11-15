//source file for the median function
#include <algorithm>    //to get the declaration of sort
#include <stdexcept>    //to get the declaration of domain_error
#include <vector>       //to get the delcaration of vector

using std::domain_error;    using std::sort;    using std::vector;

//compute the median of a vector<double>
double median(vector<double> vec){
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();

    //check that the student entered some homework grades
    if (size == 0)
        throw domain_error("median of an empty vector");

    //sort the grades
    sort(vec.begin(), vec.end());

    //compute the median homework grade
    vec_sz mid = size/2;
    return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
}