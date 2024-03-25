class leetcode73{
  
    

    public static int[][] cono = new int[200][200];
    public static int a=0;

    public static void makeZero(int i, int j, int[][]matrix){
        for(int m = 0; m < matrix.length; m++){
            matrix[m][j] = 0;
        }
        for(int m = 0; m < matrix[0].length; m++){
            matrix[i][m] = 0;
        }
    }
    public static void setZeroes(int[][] matrix) {
        for(int i = 0; i < matrix.length; i++){
            for(int j = 0; j < matrix[0].length; j++){
                if(matrix[i][j] == 0){
                   cono[a][0] = i;
                   cono[a][1] = j;
                   a++;
                }
            }
        }

        for(int i = 0; i< cono.length; i++){
            makeZero(cono[i][0], cono[i][1], matrix);
        }
    }
    




    public static void main(String args[]){
        int[][] matrix = {{1, 1, 1},{1, 0, 1},{1, 1, 1}};
        setZeroes(matrix);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                System.out.println(matrix[i][j]);
            }
        }
        
    }
}