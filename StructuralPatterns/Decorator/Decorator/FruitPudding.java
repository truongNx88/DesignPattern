package Decorator;

import Base.IMilkTea;
import Base.MilkTeaDecorator;

public class FruitPudding extends MilkTeaDecorator {
    
    public FruitPudding(IMilkTea inner) {
        super(inner);
        //TODO Auto-generated constructor stub
    }

    @Override
    public double Cost() {
        return 3d + super.Cost();
    }
}
