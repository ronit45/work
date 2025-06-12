import java.util.Scanner;
import Marketing.Sales;

public class TestSales {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name of the employee: ");
        String ename = sc.nextLine();

        System.out.println("Enter employee ID: ");
        int empid = sc.nextInt();

        System.out.println("Enter the salary: ");
        double basic = sc.nextDouble();

        Sales s = new Sales(empid, ename, basic);
        s.printDetails();

        sc.close();
    }
}