package arrays;
import java.util.Scanner;

public class cfinp {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        int[][] arr = new int[n][3];
        for (int i = 0; i<n;i++){
            for (int j = 0;j<3;j++){
                arr[i][j] = inp.nextInt();
            }
        }
        for (int i = 0; i<n;i++){
            for (int j = 0;j<3;j++){
                System.out.print(arr[i][j] + " ");
            }
        }
    }
}
