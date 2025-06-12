import java.util.*;
class q3{
public static void main(String a[]){
    System.out.println("Enter shape(in lower case)");
    Scanner sc = new Scanner(System.in);
    String shape = sc.nextLine();
    switch(shape){
        case "triangle":
        System.out.print("Enter height and breadth of the tringle:");
        int h = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("Area :" + (double)(h*b)/2);
        break;

        case "square":
        System.out.println("For Square - Enter side length");
        int side = sc.nextInt();
        System.out.println("Area :"+ (side*side));
        break;

        case "circle":
        System.out.println("For circle - Enter radius :");
        int radius = sc.nextInt();
        System.out.println("Area :"+ (double)(3.14*radius*radius));
        break;

        default:
        System.out.println("Not valid Shape");
    }
}
}