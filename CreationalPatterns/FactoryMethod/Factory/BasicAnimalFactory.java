package Factory;

import Animal.Cat;
import Animal.Dog;
import Animal.Duck;
import Animal.IAnimal;

public class BasicAnimalFactory implements IAnimalFactory {
    int index = 0;

    public IAnimal createAnimal() {
        if (index == 0 ) {
            index ++;
            return new Dog();            
        }

        if (index == 1) {
            index ++;
            return new Cat();
        }

        if (index == 2) {
            index = 0;
            return new Duck();
        }
        
        return null;
    }
    
}
