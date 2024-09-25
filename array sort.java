import java.util.Arrays;

public class SortArray {
    public static void main(String[] args) {
        
        int[] array = {12, 34, 56, 78};
        
        System.out.println("Array before sorting: " + Arrays.toString(array));
        
        
        Arrays.sort(array);
        
    
        System.out.println("Array after sorting: " + Arrays.toString(array));
    }
}
