class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int totalRow = matrix.length;
        int totalCol = matrix[0].length;

        int n = totalRow*totalCol;

        int start = 0;
        int end = n-1;

        while(start <= end){
            int mid = start+(end-start)/2;
            int rowIndex = mid/totalCol;
            int colIndex = mid%totalCol;

            if(matrix[rowIndex][colIndex] == target){
                return true;
            }
            else if(matrix[rowIndex][colIndex]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return false;
    }
}