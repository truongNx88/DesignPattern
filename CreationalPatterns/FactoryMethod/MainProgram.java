/**
 * MainProgram
 */
import java.util.Random;

import AbstractFactory.FourLegsAnimalFactory;
import AbstractFactory.TwoLegsAnimalFactory;
import Factory.*;


public class MainProgram {

    public static void main(String[] args) {
        IAnimalFactory factory;
        Random random = new Random();
        int type = random.nextInt(2);
        System.out.println("Type: " + type);
        if (type == 0) {
            factory = new FourLegsAnimalFactory();
        }
        else {
            factory = new TwoLegsAnimalFactory();
        }

        System.out.println(factory.createAnimal().GetName());
        System.out.println(factory.createAnimal().GetName());
        System.out.println(factory.createAnimal().GetName());
        System.out.println(factory.createAnimal().GetName());
        System.out.println(factory.createAnimal().GetName());
    }
}