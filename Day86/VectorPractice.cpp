// Referred from GeeksForGeeks

#include <bits/stdc++.h>

using namespace std;

// An interval has start time and end time
struct Interval {
    int start, end;
};
  
// Compares two intervals according to staring times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}


int main()
{
    vector<int> v;
  
    cout << "Vector Operations"<<endl;
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
  
    
    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
        
    cout<<"Vector size"<<v.size();
    
    cout << "\nFirst = " << v.front();
  
    cout << "\nLast = " << v.back();
    
    // removes last element
    v.pop_back();
    
    // removes the first element
    v.erase(v.begin());
    
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    
    // Sort ascending
    
    sort(v.begin(), v.end());
    
    // Sort Descending
    
    sort(v.begin(), v.end(),greater<int>());
    
    
    v.resize(0);
    
    
    
    cout<<"Vector check empty"<<v.empty();
    

    vector<Interval> v2 { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
  
    // sort the intervals in increasing order of
    // start time
    sort(v2.begin(), v2.end(), compareInterval);
  
    cout << "Intervals sorted by start time : \n";
    for (auto x : v2)
        cout << "[" << x.start << ", " << x.end << "] ";
  
  
    /*
    We create a 2D vector containing "n"
    elements each having the value "vector<int> (m, 0)".
    "vector<int> (m, 0)" means a vector having "m"
    elements each of value "0".
    Here these elements are vectors.
    */
    int n=3,m=3;
    
    vector<vector<int>> vec( n , vector<int> (m, 0));
    // vector<vector<int>> vec( n , vector<int> (m));
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout<< endl;
    }
    
    
    return 0;
}
