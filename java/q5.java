import java.util.Scanner;
public class q5 {
        public static void main(String args[]) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter size of array: ");
            int size = sc.nextInt();
    
            int a[] = new int[size];
            for(int i=0; i<size; i++) {
                a[i] = sc.nextInt();
            }
    
            int b[] = new int[size];
            for(int i=0; i<size; i++) {
                b[i] = sc.nextInt();
            }
    
            int tot1 = 0, tot2 = 0;
            for(int i=0; i<size; i++) {
                tot1 += a[i];
                tot2 += b[i];
            }
    
            System.out.println("Number of items1 sold: " + (1000-tot1));
            System.out.println("Number of items2 sold: " + (1000-tot2));
        }
    
        }

