package Factory;

import java.util.Random;

import Animal.Cat;
import Animal.Dog;
import Animal.Duck;
import Animal.IAnimal;

public class RandomAnimalFactory implements IAnimalFactory {
    public IAnimal createAnimal() {
        Random random = new Random();
        int type = random.nextInt(3);
        if (type == 0) {
            return new Dog();
        }
        else if (type == 1) {
            return new Cat();
        }
        else {
            return new Duck();
        }
    }
}
