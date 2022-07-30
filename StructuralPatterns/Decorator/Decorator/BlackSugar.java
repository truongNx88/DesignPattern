package Decorator;

import Base.IMilkTea;
import Base.MilkTeaDecorator;

public class BlackSugar extends MilkTeaDecorator {

    public BlackSugar(IMilkTea inner) {
        super(inner);
        //TODO Auto-generated constructor stub
    }

    @Override
    public double Cost() {
        return 2d + super.Cost();
    }
    
}
