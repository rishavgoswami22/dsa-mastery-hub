import java.util.*;

class solution {

    public static void main(String args[]) {
        int n = 4;

        for (int i = 1; i <= 2 * n - 1; i++) {

            // Top inverted pyramid
            if (i <= n) {
                // spaces
                for (int j = 1; j < i; j++) {
                    System.out.print(" ");
                }
                // stars
                for (int j = i; j <= n; j++) {
                    System.out.print("* ");
                }
            } 
            // Bottom pyramid
            else {
                // spaces
                for (int j = 1; j <= 2 * n - i - 1; j++) {
                    System.out.print(" ");
                }
                // stars
                for (int j = n; j >= 2 * n - i; j--) {
                    System.out.print("* ");
                }
            }

            System.out.println();
        }
    }
}
