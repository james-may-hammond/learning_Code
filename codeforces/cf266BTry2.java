import java.util.Scanner;
public class cf266BTry2 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        int t = inp.nextInt();
        inp.nextLine();
        String queue = inp.nextLine();
        StringBuilder queueMutable = new StringBuilder(queue);
        for (int i = 0;i<t;i++){
            for (int j=0;j<n-1;j++){
                if (queueMutable.charAt(j)=='B' && queueMutable.charAt(j+1)=='G'){
                    queueMutable.setCharAt(j,'G');
                    queueMutable.setCharAt(j+1, 'B');
                    j++; //since this pair is already swapped
                }
            }
        }
        System.out.println(queueMutable);
        inp.close();
    }
}
