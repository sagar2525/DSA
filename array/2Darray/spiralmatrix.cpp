#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <vector<int>> v={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    vector<int> ans;
    int row = v.size();
    int col= v[0].size();
    int total = row*col;
     
    int startingrow=0;
    int endingcol=col-1;
    int endingrow=row-1;
    int startingcol=0;
   
    int count=0;
    while(count<total){
        for(int i=startingcol;i<=endingcol && count<total;i++){
            ans.push_back(v[startingrow][i]);
            count++;
            
            
        }
        startingrow++;
        for(int i=startingrow;i<=endingrow && count<total;i++){
            ans.push_back(v[i][endingcol]);
            count++;
            
        }
        endingcol--;
        for(int i=endingcol;i<=startingcol&& count<total;i++){
            ans.push_back(v[endingrow][i]);
            count++;
            
        }
        endingrow--;
        for(int i=endingrow;i<=startingrow&& count<total;i++){
            ans.push_back(v[startingcol][i]);
            count++;
            
        }
        startingcol++;
    }

    for (int e : ans) {
        cout << e<<" "; // Print the result
    }
    cout << endl;
    return 0;
}