import java.util.*;

class solution {
    public static void main(String[] args) {
        int n = 5;
        for (int i = 1; i <= n; i++) {
            // spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            // first column and last column
            if (i == 1 || i == n) {
                for (int j = 1; j <= i; j++) {
                    System.out.print("* ");
                }
            } 
            // hollow column
            else {
                for (int j = 1; j <= i; j++) {
                    // start and end
                    if (j == 1 || j == i) {
                        System.out.print("* ");
                    } 
                    //hollow
                    else {
                        System.out.print("  ");
                    }

                }
            }
            // move to next line
            System.out.println();
        }
    }
}