package arrays;

public class Hello {
    public static void main(String args[]) {
        int arr1[]={1,4,5,6};
        int arr2[]={2,3,7,8,9};
        int arr3[]=new int[arr1.length + arr2.length];
        System.out.println("Hello");
        int i=0;
        int j=0;
        int k=0;
        while (i<arr1.length && j<arr2.length) {
            if (arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                i++;
                k++;
            } else {
                arr3[k]=arr2[j];
                j++;
                k++;
            }
        }
        for (int m=0;m<arr3.length;m++)
            System.out.print(arr3[m]+ " ");
    }
}
