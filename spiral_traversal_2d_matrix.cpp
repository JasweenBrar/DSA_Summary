// I traverse right and increment rowBegin, 
// then traverse down and decrement colEnd, 
// then I traverse left and decrement rowEnd, 
// and finally I traverse up and increment colBegin.

// The only tricky part is that when I traverse left or up 
// I have to check whether the row or col still exists to prevent duplicates.
#include <iostream>
#include <vector>
using namespace std;

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
    
    vector<int> arr;
    int rowStart = 0;
    int colStart = 0;
    int rowEnd = r;
    int colEnd = c;
    
    
    while(rowStart < rowEnd && colStart < colEnd)
    {
        for(int i=colStart ; i<colEnd ; i++)
        {
            arr.push_back(matrix[rowStart][i]) ;
        }
        rowStart += 1 ;
        
        for(int i=rowStart ; i<rowEnd ; i++)
        {
            arr.push_back(matrix[i][colEnd-1]) ;
        }
        colEnd -= 1;
        
        if(rowStart < rowEnd)
        {
            for(int i=colEnd-1 ; i>colStart-1 ; i--)
            {
                arr.push_back(matrix[rowEnd-1][i]);
            }
            rowEnd -= 1;  
        }
         
        if(colStart < colEnd)
        {
            for(int i=rowEnd-1; i>rowStart-1 ; i--)
            {
                arr.push_back(matrix[i][colStart]);
            }
            colStart += 1;  
        }
    
    }
    return arr;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
