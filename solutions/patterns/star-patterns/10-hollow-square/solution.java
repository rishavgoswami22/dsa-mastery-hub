import java.util.*;

class solution {
    public static void main(String args[]) {
        int n = 5;
        for (int i = 1; i <= n; i++) {
            // spaces
            if (i == 1) {
                for (int j = 1; j <= n; j++) {
                    System.out.print("* ");
                }
            } else if (i + 1 <= n) {
                for (int j = 1; j <= n; j++) {
                    if (j == 1) {
                        System.out.print("*");
                    }

                    else if (j == n) {
                        System.out.print(" *");
                    } else
                        System.out.print("  ");
                }
            } else if (i == n) {
                for (int j = 1; j <= n; j++) {
                    System.out.print("* ");
                }
            }
            // for(int j=2;j<=n;j++){

            // }
            // for (int j = 0; j < i - 1; j++) {
            // System.out.print(" ");
            // }
            // for (int j = 0; j < n; j++) {
            // System.out.print("*");
            // }
            System.out.println();
        }
    }
}