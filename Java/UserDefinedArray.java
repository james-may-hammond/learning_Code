import java.util.Scanner;

public class UserDefinedArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the number of entries
        System.out.print("Enter the number of entries: ");
        int entries = scanner.nextInt();

        // Create the 2D array
        int[][] array = new int[entries][3];

        // Read the entries
        for (int i = 0; i < entries; i++) {
            System.out.printf("Enter three integers for entry %d: ", i + 1);
            for (int j = 0; j < 3; j++) {
                array[i][j] = scanner.nextInt();
            }
        }

        // Print the array (optional)
        System.out.println("The entered 2D array is:");
        for (int i = 0; i < entries; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}