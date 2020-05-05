#include<bits/stdc++.h>
int board[11][11];

bool ispossible(int n,int row,int col){
	
	//check vertical
	for(int i=row-1;i>=0;i--){
		if(board[i][col] == 1){
			return false;
		}
	}
	//check upper-left-diagonal
	for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
		if(board[i][j] == 1){
			return false;
		}
	}
	//check upper-right-diagonal
	for(int i=row-1,j = col+1;i>=0 && j<n;i--,j++){
		if(board[i][j] == 1){
			return false;
		}
	}
	
	return true;
	
}

void helper(int n,int row){
	
	if(row == n){
		//we got the solution -> print it!
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<board[i][j]<<" ";
			}
			
		}
		cout<<endl;
		return;
	}
	
	//didn't reached to the solution -> check on current row ; column by column
	
	for(int col=0;col<n;col++){
		if(ispossible(n,row,col)){
			board[row][col] = 1;
			helper(n,row+1);
			//if flow of program reach here it means it didnt get the solution by placing queen 
			// at above position so we backtrack and remove queen from this place
			board[row][col] = 0;
		}
	}
	return;
	
}
void placeNQueens(int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
    memset(board,0,11*11*sizeof(int));
	helper(n,0);


}
