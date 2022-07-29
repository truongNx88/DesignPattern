public class EightDiscountStatery implements IPromoteStrategy {
    @Override
    public double doDiscount(double price) {
        // TODO Auto-generated method stub
        return price * 0.08;
    }
}
