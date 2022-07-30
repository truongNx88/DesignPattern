package Decorator;

import Base.IMilkTea;
import Base.MilkTeaDecorator;

/**
 * Bubble
 */
public class Bubble extends MilkTeaDecorator {

    public Bubble(IMilkTea inner) {
        super(inner);
        //TODO Auto-generated constructor stub
    }

    @Override
    public double Cost() {
        return 1d +  super.Cost(); 
    }
}