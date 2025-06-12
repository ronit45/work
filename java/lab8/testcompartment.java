//package lab8;
import java.util.*;
abstract class Compartment{
    public abstract void notice();
}
    class FirstClass extends Compartment{
        @Override
        public void notice(){
            System.out.println("notice for first class");
        }
    }
    class Ladies extends Compartment{
        @Override
        public void notice(){
            System.out.println("notice for Ladies class");
        }
    }
    class General extends Compartment{
        public void notice(){
            System.out.println("notice for General class");
        }
    }
    class Luggage extends Compartment{
        public void notice(){
            System.out.println("notice for luggage class");
        }
    }
public class testcompartment{
    public static void main(String args[]){
        Compartment[] compartments= new Compartment[10];
        Random rand = new Random();
        for (int i = 0; i < compartments.length; i++) {
            int compartmentType = rand.nextInt(4) + 1; // Generate a random number between 1 and 4
            switch (compartmentType) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }
        
        // Display the notice for each compartment
        for (Compartment compartment : compartments) {
            compartment.notice(); // Polymorphic behavior
        }
    }
}
   
