package Decorator;

import Base.IMilkTea;
import Base.MilkTeaDecorator;

public class WhiteBubble extends MilkTeaDecorator {

    public WhiteBubble(IMilkTea inner) {
        super(inner);
        //TODO Auto-generated constructor stub
    }

    @Override
    public double Cost() {
        return 1.5d + super.Cost(); 
    }
    
}
