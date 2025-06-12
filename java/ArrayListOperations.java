import java.util.ArrayList;
import java.util.Collections;

public class ArrayListOperations {
    public static void main(String[] args) {
        // (i) Create a new ArrayList
        ArrayList<Integer> list = new ArrayList<>();

        // (ii) Add 10 elements into it
        for (int i = 1; i <= 10; i++) {
            list.add(i);
        }

        // (iii) Print all the elements
        System.out.println("ArrayList elements: " + list);

        // (iv) Remove the third element from the ArrayList (index 2)
        list.remove(2);
        System.out.println("After removing the third element: " + list);

        // (v) Update the 4th element (index 3) by another element (e.g., 99)
        list.set(3, 99);
        System.out.println("After updating the 4th element: " + list);

        // (vi) Sort the ArrayList
        Collections.sort(list);
        System.out.println("After sorting the ArrayList: " + list);

        // (vii) Copy the ArrayList into another new ArrayList
        ArrayList<Integer> newList = new ArrayList<>(list);
        System.out.println("New ArrayList (copy of original): " + newList);

        // (viii) Reverse elements of the new ArrayList
        Collections.reverse(newList);
        System.out.println("New ArrayList after reversing: " + newList);

        // (ix) Join the two ArrayLists
        ArrayList<Integer> mergedList = new ArrayList<>(list);
        mergedList.addAll(newList);
        
        // (x) Print the merged ArrayList
        System.out.println("Merged ArrayList: " + mergedList);
    }
}