public class NoDiscountStatery implements IPromoteStrategy {
    @Override
    public double doDiscount(double price) {
        return price;
    }
}
