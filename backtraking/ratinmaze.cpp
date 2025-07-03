#include<iostream>
#include<vector>
using namespace std;

bool issafe(int i,int j, int row, int col, int arr[][4],vector<vector<bool> >&visited){
    if(((i>=0 && i<row)&&(j>=0 && j<col ))&&(arr[i][j]==1)&&(visited[i][j]== false)){
        return true;
    }
    else{
        return false;
    }
}
void solvemaze(int arr[][4],int row , int col ,int i , int j, vector<vector<bool> >&visited ,vector<string>& path,string output){
    // base case
    if(i==row-1&& j==col-1){
        path.push_back(output);
        return; 
    }
    // down i+1,j
    if(issafe(i+1,j,row,col,arr,visited)){
        visited[i+1][j]=true;
        solvemaze(arr,row,col,i+1,j,visited,path,output+"D");
        // backtrack
        visited[i+1][j] = false;
    }
    // left i,j-1
    if(issafe(i,j-1,row,col,arr,visited)){
        visited[i][j-1]=true;
        solvemaze(arr,row,col,i,j-1,visited,path,output+"L");
        // backtrack
        visited[i][j-1] = false;
    }
    // right i,j+1
    if(issafe(i,j+1,row,col,arr,visited)){
        visited[i][j+1]=true;
        solvemaze(arr,row,col,i,j+1,visited,path,output+"R");
        // backtrack
        visited[i][j+1] = false;
    }
    // up i-1,j
    if(issafe(i-1,j,row,col,arr,visited)){
        visited[i-1][j]=true;
        solvemaze(arr,row,col,i-1,j,visited,path,output+"U");
        // backtrack
        visited[i-1][j] = false;
    }
}
int main(){
    int maze[4][4]={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int row = 4;
    int col = 4;

    if(maze[0][0]==0){
        cout<<"NO path exist"<<endl;
        return 0;
    }

    vector<vector<bool>>visited(row, vector<bool>(col,false));
    visited[0][0]=true;

    vector<string> path;
    string output = "";

    solvemaze(maze,row,col,0,0,visited, path,output);

    cout<<"print the result"<<endl;

    for(auto i : path){
        cout<<i<<" ";
    }
    cout<<endl;
    if(path.size()==0){
        cout<<"no path exist"<<endl;

    }
    return 0;
}