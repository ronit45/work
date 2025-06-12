package Marketing;
import General.Employee;

public class Sales extends Employee {
    
    public Sales(int empid, String ename, double basic) {
        super(empid, ename, basic);
    }

    public double tallowance() {
        return 0.05 * earnings();
    }

    public void printDetails() {
        System.out.println("Employee ID: " + empid);
        System.out.println("Employee name: " + getName());
        System.out.println("Total earnings: " + earnings());
        System.out.println("Travelling allowance: " + tallowance());
    }
}