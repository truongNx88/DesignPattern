package AbstractFactory;

import java.util.Random;

import Animal.Chicken;
import Animal.Duck;
import Animal.IAnimal;

public class TwoLegsAnimalFactory extends AbstractAnimalFactory {
    @Override
    public IAnimal createAnimal() {
        Random random = new Random();
        int type = random.nextInt(2);
        if (type == 0) {
            return new Chicken();
        } else {
            return new Duck();
        }
    }
}
