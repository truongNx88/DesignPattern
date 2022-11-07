package Base;

public abstract class MilkTeaDecorator implements IMilkTea {

    private IMilkTea _iMilkTea;

    protected MilkTeaDecorator(IMilkTea inner) {
        _iMilkTea = inner;
    }

    @Override
    public double Cost() {
        return _iMilkTea.Cost();
    }
    
}
