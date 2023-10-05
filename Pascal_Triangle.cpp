Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:
Input: numRows = 1
Output: [[1]]


Output

#include <iostream>
#include<vector>
using namespace std; 
 


void generate(int numRows) {
        vector<vector<int>>t(numRows);
        t[0].push_back(1);
        for(int i=1;i<numRows;i++)
        {
            t[i].push_back(1);
            for(int j=1;j<i;j++)
            {
                t[i].push_back(t[i-1][j-1]+t[i-1][j]);
            }
            t[i].push_back(1);
        }
        for (int i = 0; i < t.size(); i++) { 
        for (int j = 0; j < t[i].size(); j++) 
            cout << t[i][j] << " "; 
        cout << endl; 
    } 
}
int main() 
{ 
    int i; 

    cin >> i; 
    generate(i);
    
  
    return 0; 
}
