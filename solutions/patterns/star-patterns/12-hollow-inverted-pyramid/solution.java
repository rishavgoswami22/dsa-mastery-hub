import java.util.*;

class solution {
    public static void main(String[] args) {
        int n = 4;
        for (int i = 1; i <= n; i++) {
            // spaces
            for (int j = 1; j <= i; j++) {
                System.out.print(" ");
            }
            // start and end column
            if (i == 1 || i == n) {
                for (int j = 1; j <= n - i + 1; j++) {
                    System.out.print("* ");
                }
            } else {
                for (int j = 1; j <= n - i + 1; j++) {
                    // start and end column
                    if (j == 1 || j == n - i + 1)
                        System.out.print("* ");

                    // hollow
                    else
                        System.out.print("  ");
                }
            }

            // move to next line
            System.out.println();
        }
    }
}