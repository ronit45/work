import java.util.*;

public class q6{
    double volume(int length, int width, int height) {
        double v = length*width*height;

        return v;
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length of box: ");
        int length = sc.nextInt();
        System.out.println("Enter breadth of box: ");
        int width = sc.nextInt();
        System.out.println("Enter len of box: ");
        int height = sc.nextInt();

        q6 ob = new q6();
        double vol = ob.volume(length,width,height);
        System.out.println("Volume of the box: "+vol);
}
}
