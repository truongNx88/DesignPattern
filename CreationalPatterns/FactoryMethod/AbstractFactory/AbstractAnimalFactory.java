package AbstractFactory;

import Factory.*;
import Animal.*;

abstract class AbstractAnimalFactory implements IAnimalFactory {
    public abstract IAnimal createAnimal();
}
