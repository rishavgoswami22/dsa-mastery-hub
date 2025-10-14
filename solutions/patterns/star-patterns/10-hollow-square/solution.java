import java.util.*;

class solution {
    public static void main(String args[]) {
        int n = 5;
        for (int i = 1; i <= n; i++) {
             // first column and last column
            if (i == 1 || i == n) {
                for (int j = 1; j <= n; j++) {
                    System.out.print("* ");
                }
            } 
            //hollow
             else  {
                for (int j = 1; j <= n; j++) {
                     // start and end
                    if (j == 1 || j == n) {
                        System.out.print("* ");
                    }
                    // hollow
                    else System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}