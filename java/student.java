import java.util.*;
public class student {
        int roll;
        String name;
        int percent;
    void setdata(int roll,String name,int percent){
        this.roll = roll;
        this.name = name;
        this.percent = percent;
        }
    void printdata(student a){
        if(percent>80){
        System.out.println("Name : " + name);
        System.out.println("Roll : "+ roll);
        System.out.println("Percent :"+ percent);
        }
    }


    public static void main(String[] args){
        student S1 = new student();
        Scanner sc = new Scanner(System.in);
        int roll = sc.nextInt();
        String name = sc.next();
        int percent = sc.nextInt();
        S1.setdata(roll, name, percent);
        S1.printdata(S1);

        student S2 = new student();
        
        roll = sc.nextInt();
        name = sc.next();
        percent = sc.nextInt();
        S2.setdata(roll, name, percent);
        S2.printdata(S2);

        student S3 = new student();
        roll = sc.nextInt();
        name = sc.next();
        percent = sc.nextInt();
        S3.setdata(roll, name, percent);
        S3.printdata(S3);

        student S4 = new student();
        roll = sc.nextInt();
        name = sc.next();
        percent = sc.nextInt();
        S4.setdata(roll, name, percent);
        S4.printdata(S4);


        


    }
}
