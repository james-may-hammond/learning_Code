public class vovels_count {
    public static void main(String[] args) {
        String input = "Hello how are you doing";
        input = input.toLowerCase();
        int cnt =0;
        for (int i=0;i<input.length();i++){
            if (input.charAt(i)=='a' || input.charAt(i)=='e'  || input.charAt(i)=='i' || input.charAt(i)=='o' || input.charAt(i)=='u')
                cnt++;
        }
        System.out.println("Total No. of vovels is : " + cnt);

    }
}
