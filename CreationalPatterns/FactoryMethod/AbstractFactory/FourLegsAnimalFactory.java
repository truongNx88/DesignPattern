package AbstractFactory;

import java.util.Random;

import Animal.Cat;
import Animal.Dog;
import Animal.IAnimal;

public class FourLegsAnimalFactory extends AbstractAnimalFactory {
    @Override
    public IAnimal createAnimal(){
        Random random = new Random();
        int type = random.nextInt(2);
        if (type == 0) {
            return new Dog();
        } else {
            return new Cat();
        }
    }
}
