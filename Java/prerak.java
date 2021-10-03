class Main
{

    public static void printZigZag(int row, int col)
    {
        if(row == 1){
            for (int i = 1; i <= col; i++) {
                System.out.println(i + " ");
            }
            System.out.println();
            return;
        }
        for (int i = 1; i <= row ;i++) {
            for (int j = 1; j <= col; j++) {
                String x = String.valueOf(j);
                if(j % (2 * row -2) == i || ((2 * row-j) % (2 * row-2) == i % (2*row - 2))){
                    System.out.println(x);
                }
                else{
                    for (char  c : x) {
                        System.out.println(" ");
                    }
                }
            }
        }
    }
 
    public static void main(String[] args)
    {
        int row = 123456789;
        int col = 7;
 
        printZigZag(row, col);
    }
}