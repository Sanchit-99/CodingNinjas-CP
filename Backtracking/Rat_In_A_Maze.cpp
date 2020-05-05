int soln[10][10]={0};

void ratinamaze(int maze[][20], int n,int row,int col){

  	if(row == n-1 && col == n-1){
  		soln[row][col] = 1;
  		for(int i=0;i<n;i++){
  			for(int j=0;j<n;j++){
  				cout<<soln[i][j]<<" ";
			  }
		  }
        cout<<endl;
        return;
	  }
	 
	
	if(row<0 || row==n || col<0 || col==n || soln[row][col] == 1 || maze[row][col] == 0){
		return;
	}
	soln[row][col] = 1;
	ratinamaze(maze,n,row,col-1); //left
	ratinamaze(maze,n,row,col+1); //right
	ratinamaze(maze,n,row-1,col); //up
	ratinamaze(maze,n,row+1,col); //down
	soln[row][col] = 0;


}

void ratInAMaze(int maze[][20], int n){

  /* Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Print output as specified in the question
  */
    ratinamaze(maze,n,0,0);


}
