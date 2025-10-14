import java.util.*;

class solution {

    public static void main(String args[]) {
        int n = 4;
        int s = 1;
        for (int i = 1; i <= 2 * n - 1; i++) {
            // top pyramid
            if (i <= n) {

                for (int j = 1; j <= n - i; j++) {
                    System.out.print(" ");
                }
                for (int j = 1; j <= i; j++) {
                    if (j == 1 || j == i) {
                        System.out.print("* ");
                    } else {
                        System.out.print("  ");
                    }
                }

            } else {
                // bottom pyramid
                for (int j = 1; j <= s; j++) {
                    System.out.print(" ");

                }
                s++;
                for (int j = 1; j <= 2 * n - i; j++) {
                    if (j == 1 || j == 2 * n - i) {
                        System.out.print("* ");
                    } else {
                        System.out.print("  ");
                    }

                }
            }

            System.out.println();
        }
    }
}