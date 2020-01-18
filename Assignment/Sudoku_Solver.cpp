int n = 9;

bool ispossibleinColumn(int col,int num,int board[9][9]){
	for(int i=0;i<n;i++){
		if(board[i][col] == num){
			return false;
		}
	}
	return true;	
}

bool ispossibleinRow(int row,int num,int board[9][9]){
	for(int i=0;i<n;i++){
		if(board[row][i] == num){
			return false;
		}
	}
	return true;
}

bool ispossibleinGrid(int row,int col,int num,int board[9][9]){
	
	int rf = row - (row%3);
	int cf = col - (col%3);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(board[i+rf][j+cf] == num){
				return false;
			}
		}
	}
	return true;
	
}
bool ispossible(int row,int col,int num,int board[9][9]){
	
	if(ispossibleinRow(row,num,board) && ispossibleinColumn(col,num,board) && ispossibleinGrid(row,col,num,board)){
		return true;
	}
	return false;
	
	
}

bool hasEmptyPosition(int *row,int *col,int board[9][9]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(board[i][j] == 0){
				*row = i;
				*col = j;
				return true;
			}
			
		}
	}
	return false;
}

bool sudokuSolver(int board[][9]){

    	int row,col;
	
	if(hasEmptyPosition(&row,&col,board)){
		
		for(int i=1;i<=n;i++){
			
			if(ispossible(row,col,i,board)){
				board[row][col] = i;
				if(sudokuSolver(board)){
					return true;
				}
				board[row][col] = 0;
			}
			
		}
		//if u have tried all combination from 1 to 9 and none work-out so you backtrack...
		return false;
		
	}else{
		return true;
	}

}
